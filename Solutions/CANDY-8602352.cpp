/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t != -1)
    {       int sum=0;
           int a[t];
           for(i=0;i<t;i++)
           { scanf("%d",&a[i]);sum+=a[i]; }
           if(sum%t ==0)
           {    int x;
                 x=sum/t;
                 int k=0;
               for(i=0;i<t;i++)
               {
                    if((x-a[i]) >0){k=k+(x-a[i]);}
               }
               printf("%d\n",k);
           }
           else printf("-1\n");

           scanf("%d",&t);

    }
    if(t==-1){return 0;}
return 0;
}

