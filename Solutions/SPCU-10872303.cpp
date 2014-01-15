/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int t,f,n,ar[100007];

int main()
{
	ios::sync_with_stdio(0);	
	cin >> t;
	while(t--)
	{	f=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>ar[i];
		if(ar[0] !=0) f=1;
		for(int i=1;i<n;i++)
		{
			if(ar[i] > i) {f=1;break;}
		}
		if(f==1) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
