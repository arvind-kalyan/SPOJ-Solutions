#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int ar[2005],dp[2005][2005];
int n;

int solve(int be, int en)
{
    if(be > en) return 0;
    if(dp[be][en] != -1) return dp[be][en];
    int year= n-(en-be+1) +1;
    return dp[be][en] = max(ar[be]*year + solve(be+1,en),ar[en]*year+ solve(be,en-1));

}

int main()
{
     cin>>n;
     memset(dp, -1, sizeof dp);
    for(int i=0;i<n;i++) cin>>ar[i];
    cout<<solve(0,n-1)<<endl;
    return 0;
}

