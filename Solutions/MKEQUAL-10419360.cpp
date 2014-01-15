#include<bits/stdc++.h>
using namespace std;
void fastint( register int *n ){
	register char c;
	*n = 0;
	while(!isdigit(c = getc( stdin )));
	do {
		switch( c ){
			case ' ': case '\n': return;
			default: (*n) *= 10; (*n) += ( c - '0' ); break;
		}
	}while( ( c = getc( stdin ) ));
}
int main()
{
    int t,n,x,i,sum;
    fastint(&t);
    while(t--)
    {
      sum=0;
      fastint(&n);
      for(i=0;i<n;i++)
      {
        fastint(&x);
        sum+=x;
      }
      if(sum%n==0){printf("%d\n",n);}
      else {printf("%d\n",n-1);}
    }
    return 0;
}

