/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
int main()
{
   int a[180]={0};
   int i=0,j,num1,temp=0,num,test,x;

   scanf("%d",&test);
   while(test--)
   {
        scanf("%d",&num);
        num1 = num;
        if(num==1)
        {
                  printf("1\n");
                  continue;
        }
        while(num!=0)
        {
             a[i] = num%10;
             num = num/10;
             i++;
        }
        while(1)
        {
                num1--;
                if(num1==0)
                {
                     break;
                }
                for(j=0;j<i;j++)
                {
                    x = a[j]*num1+temp;
                    a[j] = x%10;
                    temp = x/10;
                }
                while(temp!=0)
                {
                     a[j] = temp%10;
                     temp = temp/10;
                     j++;
                }
                i=j;
        }
        j--;
        printf("");
        for(i=j;i>=0;i--)
        {
             printf("%d",a[i]);
        }
        printf("\n");
        i=0;
        temp=0;
     }
   return 0;
}






