/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long sum,ans;
    int i,x,n;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0){break;}
        sum=ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            sum+=x;
            ans+=(long long)abs((double)sum);
        }
        printf("%lld\n",ans);
    }
    return 0;
}

