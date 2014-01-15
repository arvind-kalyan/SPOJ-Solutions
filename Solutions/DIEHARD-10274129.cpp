/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int dp[1010][1010];

int solve(int h, int a, int cnt,bool f)
{
    if( h<=0 || a<=0) return cnt;

    if(dp[h][a] != -1) return dp[h][a];
    if(f) dp[h][a] = max(dp[h][a], solve(h+3,a+2,cnt+1,!f));

    return dp[h][a] = max(dp[h][a], max(solve(h-5,a-10,cnt+1,!f),solve(h-20,a+5,cnt+1,!f)));
}

int main()
{   int tc;
    cin >> tc;
    int h,a;

    while(tc--){
    bool f=true;
    memset(dp,-1,sizeof dp);
    cin >> h >> a;

    cout << solve(h,a,-1,f) << endl;
}
   return 0;

}

