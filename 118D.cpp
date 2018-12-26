#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lookup[101][101][2][11];
long solve(int x,int y,int type,int cnt,int k1,int k2)
{
	if(x==0&&y==0)
	return 1;
	
	if(lookup[x][y][type][cnt]!=-1)
	return lookup[x][y][type][cnt];
	ll count=0;
	if(type==0)
	{
		if(cnt<k1&&x>0)
		count+=solve(x-1,y,0,cnt+1,k1,k2);
		
		if(y>0)
		count+=solve(x,y-1,1,1,k1,k2);
	}
	else
	{
		if(cnt<k2&&y>0)
		count+=solve(x,y-1,1,cnt+1,k1,k2);
		
		if(x>0)
		count+=solve(x-1,y,0,1,k1,k2);	
	}
	lookup[x][y][type][cnt]=count%100000000;
	return lookup[x][y][type][cnt]; 
}
int main()
{
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	memset(lookup,-1,sizeof(lookup));
	ll ans=solve(n1,n2,0,0,k1,k2);
	cout<<ans<<endl;
}
