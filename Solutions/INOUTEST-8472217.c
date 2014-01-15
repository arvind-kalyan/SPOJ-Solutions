/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{
 int n;
 int a,b;
 long long res;
 scanf("%d",&n);
 while(n--)
 {
     scanf("%d %d",&a,&b);
     res=a*b;
     printf("%lld",res);
     if(n!=0){printf("\n");}
 }
 return 0;
}





