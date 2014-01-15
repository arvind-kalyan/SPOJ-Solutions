/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{ int t;
  scanf("%d",&t);
 int n,a,d;
 while(t--)
 {  int res=0;
   scanf("%d %d %d",&n,&a,&d);
   res=n*((2*a)+(n-1)*d);
    res=res/2;
    printf("%d\n",res);
    
}
return 0;
}
