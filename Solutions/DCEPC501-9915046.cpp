/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define MAX 100009
#define FOR(i,a,b)  for(int i=a; i<b; i++)
#define rFOR(i,a,b) for(int i=a; i>=b; i--)

using namespace std;

int T,N,A[MAX];
long long int dp[MAX];

// dp[i] represents the best return Leonard can get from toys in
// the range [i..N) - zero based.

int main()
{
   scanf("%d",&T);
   while(T--)
   {
       scanf("%d",&N);
       memset(A,0,sizeof A);
       FOR(i,0,N) scanf("%d",&A[i]);
       memset(dp,0,sizeof dp);
       rFOR(i,N-1,0)
        dp[i]=max(A[i]+dp[i+2],max(A[i]+A[i+1]+dp[i+4],A[i]+A[i+1]+A[i+2]+dp[i+6]));
           
       printf("%lld\n",dp[0]);
   }
   return 0;
}

