#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int ar1[]={1,2,3,4,6,12};
		bool dp[6];
		int count=0;
		memset(dp,false,sizeof(dp));
		for(int i=0;i<6;i++)
		{
			bool ans=false;
			for(int k=0;k<ar1[6-i-1];k++)
			{
				bool f=true;
				for(int j=k;j<12;j=j+ar1[6-i-1])
				{
					f=f&(s[j]=='X');
				}
				ans=ans|f;
			}
			dp[6-i-1]=ans;
			if(ans)
			count++;
		}
		cout<<count<<" ";
		for(int i=0;i<6;i++)
		{
			if(dp[6-i-1])
			cout<<ar1[i]<<"x"<<ar1[6-i-1]<<" ";
		}
		cout<<endl;
	}
}
