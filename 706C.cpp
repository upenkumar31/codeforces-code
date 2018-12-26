#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s[100000][2];
ll dp[100000][2];
ll solve(ll *ar,ll i,int j)
{
	if(i==0) return j?ar[0]:0;
	if(~dp[i][j])
	return dp[i][j];
	ll r=LONG_LONG_MAX;
	if(s[i][j]>=s[i-1][0])
	r=min(r,solve(ar,i-1,0)+j?ar[i]:0);
	if(s[i][j]>=s[i-1][1])
	r=min(r,solve(ar,i-1,1)+j?ar[i]:0);
	dp[i][j]=r;
	
}
int main()
{
	ll n;
	cin>>n;
	ll ar[n];
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)
	cin>>ar[i];
	for(int i=0;i<n;i++)
	{
		cin>>s[i][0];
		s[i][1]="";
		for(int j=s[i][0].size()-1;j>=0;j--)
		s[i][1]+=s[i][0][j];	
	}
	ll res=min(solve(ar,n-1,1),solve(ar,n-1,0));
	cout<<((res==LONG_LONG_MAX)?-1:res)<<endl;
}

