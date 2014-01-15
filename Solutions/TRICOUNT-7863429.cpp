/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
  int main()
{
  long long  int t,n;
  long long int result;
 scanf("%lld",&t);
  while(t--)
  { scanf("%lld",&n);
     result=(n*(n+2)*(2*n+1))/8;
     printf("%lld\n",result);
  }
return 0;
}

