/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
main()
{
int t,i;
double n;
scanf("%d",&t);
while(t--)
{
    cin>>n;
    double sum=0.0;
    for(i=n;i>0;i--)
    {
        sum=sum+(double)(n/i);
    }
    sum=ceilf(sum*100)/100;
    cout<<sum<<endl;
}
}

