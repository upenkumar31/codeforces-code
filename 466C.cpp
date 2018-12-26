#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	ll ar[n];
	for(ll i=0;i<n;i++)
	cin>>ar[i];
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	ll k;
	for(ll i=1;i<=n;i++)
	{
		dp[i]+=dp[i-1]+ar[i-1];
	}
	ll ans=0;
	ll a=0,b=0;
	if(dp[n]%3==0&&n>=3)
	{
		ll part=dp[n]/3;	
		for(ll i=1;i<=n;i++)
		{
			if(dp[i]==part*2) b=b+a;
			if(dp[i]==part) a++;
		}
		if(part==0)
		b-=a-1;
		ans=b;
	}
	else
	ans=0;
	cout<<ans<<endl;
}
