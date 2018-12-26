#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n,j;
	cin>>n;
	int ar[n];
	for(int i=0;i<n-1;i++)
	cin>>ar[i];
	int a,b;
	cin>>a>>b;
	int sum=0;
	for(int i=0;i<n-1;i++)
	{
		if(i>=a-1&&i<b-1)
		sum+=ar[i];
	}
	cout<<sum;
}
