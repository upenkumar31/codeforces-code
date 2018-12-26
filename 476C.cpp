#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll ar[n];
	for(ll i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll sum[n-m+1];
	sum[0]=0;
	for(ll i=0;i<m;i++)
	sum[0]+=ar[i];
	for(ll i=m;i<=n-m+1;i++)
	sum[i-m+1]=sum[i-m]+ar[i]-ar[i-m];
	n=n-m+2;
	ll dp[n];
	for(int i=0;i<n;i++)
	dp[i]=sum[i];
	for(int i=m;i<n;i++)
	{
		ll mx=0;
		for(int j=i-m;j<i;j++)
		mx=max(mx,dp[j]);
		dp[i]+=mx;
	}
	for()
	cout<<ans;
}
