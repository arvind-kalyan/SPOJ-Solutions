#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#define MAX 2005

using namespace std;

int dp[MAX][MAX];
char A[MAX],B[MAX];
int m,n;

int edist(char A[],char B[])
{   int i,j;

    for(i=1;i<=m;i++){ dp[i][0]=i; }
    for(j=1;j<=n;j++){ dp[0][j]=j; }

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {   int val= (A[i-1]==B[j-1])? 0:1;
            dp[i][j] = dp[i-1][j-1]+val;
            dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
            dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
        }
    }
    return dp[m][n];
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",A);
        scanf("%s",B);
        m=strlen(A);
        n=strlen(B);
        memset(dp,0,sizeof dp);
        printf("%d\n",edist(A,B));
    }
    return 0;
}

