#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,n;
	cin>>n>>a>>b;
	ll mx=max(a,b);
	ll mn=min(a,b);
	ll tot=(a+b);
	ll cn=(int)((float)n*((float)mx/tot));
	ll ans=mx;
	if(cn>0){
	ans=min(ans,mx/cn);
	cn=n-cn;
	ans=min(ans,mn/cn);
	}
	else
	ans=0;
	cout<<ans<<endl;
}
