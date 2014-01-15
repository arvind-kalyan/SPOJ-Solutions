/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
using namespace std;
main()
{
int a,t,i;
long b;
cin>>t;
while(t--)
{
cin>>a>>b;
a=a%10;
if(b==0){cout<<"1\n";continue;}
if(a==0){cout<<"0\n";continue;}
if(a==1){cout<<"1\n";continue;}
if(a==5){cout<<"5\n";continue;}
if(a==6){cout<<"6\n";continue;}
i=1;
b=b%4;
if(b==0)b=4;
while(b--)i*=a;
cout<<i%10<<endl;
}


}


