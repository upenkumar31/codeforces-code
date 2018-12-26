#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long ar[n];
	for(long long i=0;i<n;i++)
	cin>>ar[i];
	long long k=-1;
	long long dp[100001],cn[100001];
	memset(cn,0,sizeof(cn));
	memset(dp,0,sizeof(dp));
	for(long long i=0;i<n;i++)
	{
		cn[ar[i]]++;
	}
	dp[0]=0;
	dp[1]=cn[1];
	for(long long i=2;i<=100001;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*cn[i]);
	}
	cout<<dp[100000]<<endl;
}
