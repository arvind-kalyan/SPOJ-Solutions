/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
using namespace std;
int main()
{
int t,n,i;
long long a[44];
a[0]=1;a[1]=1;
for(i=2;i<44;i++)
{
    a[i]=a[i-1]+a[i-2];
}
long long ans;
cin>>t;
while(t--)
{    cin>>n;
      ans=a[n+1];
    cout<<ans; if(t!=0){cout<<"\n";}
}
return 0;
}

