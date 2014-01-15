#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,t;
    unsigned long long dp[55],a2,a4,a6,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        a2=1;
        a4=1;
        a6=1;
        memset(dp,0,sizeof(dp));
        dp[0]=3;
        for(i=1;i<n;i++)
        {
           l=a2;
           a2=dp[i-1]-a6;
           a4=dp[i-1];
           a6=dp[i-1]-l;
           dp[i]=a2+a6+a4;
        }
        printf("%llu\n",dp[n-1]);

    }
    return 0;
}



