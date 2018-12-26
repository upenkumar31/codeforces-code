#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,x;
	cin>>t;
	while(t--)
	{
		ll it,vad,f=0;
		cin>>it>>vad;
		if(it==vad)
		cout<<"IDLY"<<endl;
		else if(it==0||vad==0)
		cout<<"VADA"<<endl;
		else
		{
			f=0;
			while(1)
			{
				ll mx=max(it,vad);
				ll i=it;
				ll v=vad;
				it=min(it,vad);
				vad=(i+v-2*it)/2;
				cout<<it<<" "<<vad<<endl;
				if(vad==it)
				{
					f=1;
					break;	
				}
				if(vad==1&&it==0)
				break;
				if(vad==0&&it==1)
				break;
			}
				if(f==1)
				cout<<"IDLY"<<endl;
				else if(it==1&&vad==0)
				cout<<"IDLY"<<endl;
				else if(vad==1&&it==0)
				cout<<"VADA"<<endl;
		}
	}
}
