#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	ll ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll mn=*min_element(ar,ar+n);
	ll pre=n+1;
	ll ans=n;
	for(int i=0;i<n;i++)
	{
		if(mn==ar[i])
		{
			if(pre==n+1)
			pre=i;
			else
			{
				ans=min(ans,i-pre);
				pre=i;
			}
		}
	}
	cout<<ans<<endl;
}
