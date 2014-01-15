/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{
long long n;
while(scanf("%lld",&n)!=EOF)
{if((n&(n-1))==0)
printf("TAK\n");
else
printf("NIE\n");
}
}

