/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,i,num;
    int k;
 
    scanf("%d",&t);
    nextcase:while(t--)
   {    int sum=1;
        scanf("%d",&num);
        k=sqrt(num);
        if(num==1){sum=0; printf("\n%d",sum); goto nextcase;}
         for(i=2;i<=k;i++)
        { if(num%i==0)
            {sum+=(num/i)+i;
              }
        }
          if(k*k==num){sum-=k;} 
          printf("\n%d",sum);}
return 0;
}



