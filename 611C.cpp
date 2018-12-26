#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin>>h>>w;
	char ar[h][w];
	for(int i=0;i<h;i++)
	for(int j=0;j<w;j++)
	cin>>ar[i][j];
	int dp[h][w];
	memset(dp,0,sizeof(dp));
	dp[0][0]=0;
	
	for(int i=1;i<h;i++)
	if(ar[i][0]=='.'&&ar[i-1][0]=='.')
	dp[i][0]+=dp[i-1][0]+1;
	else
	dp[i][0]+=dp[i-1][0];
	
	for(int i=1;i<w;i++)
	if(ar[0][i]=='.'&&ar[0][i-1]=='.')
	dp[0][i]+=dp[0][i-1]+1;
	else
	dp[0][i]+=dp[0][i-1];
	
	for(int i=1;i<h;i++)
	{
		for(int j=1;j<w;j++)
		{
				if(ar[i][j]=='.'&&ar[i][j-1]=='.')
				dp[i][j]+=dp[i][j-1]+1;
				else
				dp[i][j]+=dp[i][j-1];	
				
				if(ar[i][j]=='.'&&ar[i-1][j]=='.')
				dp[i][j]+=dp[i-1][j]+1;
				else
				dp[i][j]+=dp[i-1][j];	
		}
	}
	int q,a,b,c,d;
	cin>>q;
	for(int i=0;i<q;i++)
	{
		cin>>a>>b>>c>>d;
		cout<<dp[c-1][d-1]-dp[a-1][b-1]<<endl;
	}
}
