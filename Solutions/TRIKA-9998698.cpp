/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<algorithm>
#include<cstring>
#define INF 10000000
using namespace std;
int ar[25][25];
int dp[25][25];
int n,m,x,y;
int solve(int i, int j)
{
    if(i==n-1 && j== m-1) return dp[i][j] = ar[n-1][m-1];
    if(i==n|| j==m) return INF;
    if( dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = ar[i][j]+ min(solve(i,j+1), solve(i+1, j));
}

int main()
{
    memset(dp,-1,sizeof dp);
    cin>>n>>m>>x>>y;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>ar[i][j];

    int power = ar[x-1][y-1];
    int ans = 2*power - solve(x-1,y-1);
    if(ans < 0) cout<<"N"<<endl;
    else cout<<"Y "<<ans<<endl;
    return 0;

}

