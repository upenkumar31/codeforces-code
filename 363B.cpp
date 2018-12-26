#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	ll ar[n];
	for(ll i=0;i<n;i++)
	cin>>ar[i];
	ll dp[n+1];
	memset(dp,0,sizeof(dp));
	for(ll i=1;i<=n;i++)
	{
		dp[i]+=dp[i-1]+ar[i-1];
	}
	ll ans=0;
    ll mi=INT_MAX;
	for(int i=1;i<=n-k+1;i++)
    {
    	if(mi>(dp[i+k-1]-dp[i-1]))
    	{
    		ans=i;
    		mi=dp[i+k-1]-dp[i-1];
		}
	}
	cout<<ans<<endl;
}
