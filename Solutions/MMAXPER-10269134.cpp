#include<bits/stdc++.h>
using namespace std;

const int MAX=1001;

int n,ar[MAX][MAX],dp[MAX][2];

int solve(int i, int s)
{
    if(dp[i][s] != -1) return dp[i][s];

    if(i==0) return dp[i][s] = ar[i][s];

    return dp[i][s]= max(solve(i-1,0)+ abs(ar[i-1][1] - ar[i][(s+1)%2] )+ ar[i][s],
                         solve(i-1,1) + abs(ar[i-1][0] - ar[i][(s+1)%2])+ ar[i][s]);

}
int main()
{
    memset(dp,-1,sizeof dp);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i][0] >> ar[i][1];
    }
    cout << max(solve(n-1,0),solve(n-1,1)) << endl;

    return 0;
}

