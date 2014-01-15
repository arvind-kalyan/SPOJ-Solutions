#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{   bool dp[1000001];
    int k,l,n,m;
    scanf("%d %d %d",&k,&l,&m);
    dp[0]=false;
    dp[1]=true;
    for(int i=2; i<=1000000;i++)
    {
        if(!dp[i-1]) dp[i]=true;
        else if(i>=k && !dp[i-k]) dp[i]=true;
        else if(i>=l && !dp[i-l]) dp[i]=true;
        else dp[i]=false;
    }
    while(m--)
    {
        scanf("%d",&n);
        if(dp[n]) printf("A");
        else printf("B");
    }
    return 0;
}


