/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>



int main()
{
    int n,a[1000002],i,x;
    long long ans;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0){break;}
        for(i=0;i<n;i++){scanf("%d",&a[i]);}
        x=(n+1)/2;
        ans=0;
        for(i=(n-x);i<n;i++){ans+=a[i];}
        printf("%lld\n",ans);
    }
    return 0;
}

