#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

#define MAX 100009
#define FOR(i,a,b)  for(int i=a; i<b; i++)
#define rFOR(i,a,b) for(int i=a; i>=b; i--)

using namespace std;
void scanint(int &x)
{
	register int c = getchar_unlocked();
	int neg = 0;
	x = 0;
	for(;((c<48 || c>57) && c != '-');
	c = getchar_unlocked());
	if(c=='-') 
	{
		neg=1;
		c=getchar_unlocked();
	}
	for(;c>47 && c<58;c = getchar_unlocked())
		x = (x<<1) + (x<<3) + c - 48;
	if(neg) 
		x=-x;
}
 
int T,N,A[MAX];
long long int dp[MAX];

// dp[i] represents the best return Leonard can get from toys in
// the range [i..N) - zero based.

int main()
{
   scanint(T);
   while(T--)
   {
       scanint(N);
       memset(A,0,sizeof A);
       FOR(i,0,N) scanf("%d",&A[i]);
       memset(dp,0,sizeof dp);
       rFOR(i,N-1,0)
        dp[i]=max(A[i]+dp[i+2],max(A[i]+A[i+1]+dp[i+4],A[i]+A[i+1]+A[i+2]+dp[i+6]));
           
       printf("%lld\n",dp[0]);
   }
   return 0;
}

