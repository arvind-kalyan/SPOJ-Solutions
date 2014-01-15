/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    long long ans,a[10000],b[100000],c[10000];
    scanf("%d",&n);
    a[0]=b[0]=c[0]=1;
    for(i=0;i<n;i++)
    {
        a[i+1]=a[i]+b[i];
        b[i+1]=b[i]+c[i]+a[i];
        c[i+1]=c[i]+b[i];
    }
    printf("%lld\n",a[n-1]+b[n-1]+c[n-1]);
    return 0;
}

