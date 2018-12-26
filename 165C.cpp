#include<iostream>
using namespace std;
int main()
{
	int kn;
	cin>>kn;
	string s;
	cin>>s;
	int n=s.size();
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++)
	dp[i]=dp[i-1]+((s[i-1]=='1')?1:0);
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i+1;j++)
		{
			
			int k=j+i-1;
			if((dp[k]-dp[j-1])==kn)
			ans++;
		}
	}
	cout<<ans<<endl;
}
