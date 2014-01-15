#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,a0[100],a1[100],a2[100],i,j;
    long long dp[100][3];
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&a0[i],&a1[i],&a2[i]);


        }
        dp[0][0]=a0[0];
        dp[0][1]=a1[0];
        dp[0][2]=a2[0];
        for(i=1;i<n;i++)
        {
            dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a0[i];
            dp[i][1]=min(dp[i-1][0],dp[i-1][2])+a1[i];
            dp[i][2]=min(dp[i-1][1],dp[i-1][0])+a2[i];
        }
        cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]))<<"\n";

    }
    return 0;
}



