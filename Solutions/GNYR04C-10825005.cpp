/*
	Author - Arvind K
	College - BITS Pilani
*/



#include<stdio.h>
#include<string.h>
using namespace std;

int b[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
long long dp[12][2003];


long long f( int n , int m ){
  if( n == 0 ) return 1;
  if( m == 0 ) return 0;
  long long &ret = dp[ n ][ m ];
  if( ret != -1 ) return ret;
  ret = 0;
  ret += f( n , m - 1 );
  ret += f( n - 1 , m / 2 );
  return ret;
}
int main()
{
    int i,j,t,k,n,m;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d",&n,&m);
         memset( dp , -1 , sizeof dp );
        printf("Data set %d: %d %d %lld\n",k,n,m,f(n,m));
    }
    return 0;
}


