#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int mi,mx;
		mi=ar[i];
		mx=ar[i];
		for(int j=i+1;j<n;j++)
		{
			mi=min(mi,ar[j]);
			mx=max(mx,ar[j]);
			if(mx-mi<=1)
			ans=max(ans,j-i+1);
			else
			break;
		}
	}
	cout<<ans<<endl;
}
