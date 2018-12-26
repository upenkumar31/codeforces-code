#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int ar[n],l[m];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	map<int,int> mp;
	int dp[n+1];
	dp[n]=0;
	for(int i=n-1;i>=0;i--)
	{
		if(mp[ar[i]]==1)
		dp[i]=dp[i+1];
		else
		{
			mp[ar[i]]=1;
			dp[i]=dp[i+1]+1;
		}
		
	}
	for(int i=0;i<m;i++)
	{
		cin>>n;
		cout<<dp[n-1]<<endl;
	}
}
