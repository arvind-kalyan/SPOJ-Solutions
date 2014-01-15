/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[2000],exp[2000],i,j,ans,sum,k;
    int dp[2000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    dp[1]=a[1];
    for(i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+a[i];
        k=0;
        for(j=i-1;j>=0;j--)
        {

         dp[i]=min(dp[i],dp[j]+k+a[i]);
         if(j>0){k+=(i-j);}
        }
        //cout<<dp[i]<<" ";
    }
    cout<<dp[n]<<"\n";
    return 0;

}


