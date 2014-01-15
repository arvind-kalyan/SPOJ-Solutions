#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>

using namespace std;

int dp[2050][2050];
string A,B;
int K,m,n;

int main()
{    getline(cin,A);
     getline(cin,B);
     m = A.length();
     n = B.length();
     scanf("%d",&K);

     dp[0][0]=0;
     for(int j=1; j<=n; j++) dp[0][j] = j*K;
     for(int i=1; i<=m; i++) dp[i][0] = i*K;

     for(int i=1; i<=m; i++)
     {
         for(int j=1;j<=n;j++)
         {
             dp[i][j] = min(dp[i-1][j-1]+ abs(B[j-1]-A[i-1]),min(dp[i-1][j]+K, dp[i][j-1]+K) );
         }

     }
     cout<<dp[m][n]<<endl;
     return 0;
}

