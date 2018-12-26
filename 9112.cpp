#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,n;
	cin>>n>>a>>b;
	ll sum=a+b+n;
	if((sum<=7&&a<=3&&b<=3&&n<=3)||(a+b==4&&a==2)||(b+n==4&&b==2)||(a+n==4&&n==2)||(min(a,min(b,n))==1)||(a==3&&b==3&&n==3))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
