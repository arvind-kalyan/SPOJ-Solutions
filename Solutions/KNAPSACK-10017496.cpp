/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
                // Standard 0-1 Knapsack
using namespace std;
int n,W,i,j;
int dp[2005][2005];
int w[2005],v[2005];

int main()
{
        cin>>W>>n;
        for(i=1;i<=n;i++) cin>>w[i]>>v[i];
        for(i=0;i<=W;i++) dp[0][i]=0;
        for(i=0;i<=n; i++) dp[i][0]=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=W;j++)
            {
              dp[i][j] =(j>=w[i])? max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]):dp[i-1][j];
            }
        }
        cout<<dp[n][W]<<endl;
}

