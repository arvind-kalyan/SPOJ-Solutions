/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
using namespace std;

long long gcd(long long a,long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);   
}

int main()
{
    long long a,b,x,y,TEMP;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        TEMP=gcd(a,b);
        x=b/TEMP;
        y=a/TEMP;
        printf("%lld %lld\n",x,y);
    }
    return 0;
}

