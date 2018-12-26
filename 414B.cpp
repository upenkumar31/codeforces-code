#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll dp[n+1];
	ll fact[n+1];
	fact[0]=1;
	int sum=0;
	for(ll i=1;i<=n;i++)
	{
		dp[i]=n/i;
		sum+=dp[i];
		fact[i]=(fact[i-1]*i)%1000000007;
		
	}
	ll ans=0;
	for(ll i=1;i<=n;i++)
	{
		ll an=1;
		for(ll j=2;j<=k;j++)
		an*=(dp[i]-(k-j+1))%1000000007;
		ans=(ans+an)%1000000007;
	}
	cout<<ans<<endl;
}
