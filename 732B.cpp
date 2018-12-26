#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	int ans=0;
	for(int i=1;i<n;i++)
	{
		if(ar[i-1]+ar[i]<k)
		{
			ans+=k-(ar[i]+ar[i-1]);
			ar[i]+=k-(ar[i]+ar[i-1]);
		}
	}
	cout<<ans<<endl;
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
}
