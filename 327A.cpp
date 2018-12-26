#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	int zero=0,one=0;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		if(ar[i]==1)
		{
			one++;
			if(zero>0)
			zero--;
		}
		else
		{
			zero++;
			if(zero>ans)
			ans=zero;
		}
	}
	cout<<ans+one<<endl;
}
