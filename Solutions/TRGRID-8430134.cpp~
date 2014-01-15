#include<stdio.h>

int main()
{
    char c;
    int t;
    long n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld",&n,&m);
       if((n%2==0)&&(m%2==0))
       {
           if(n>m)
           {
               c='U';
           }
           else
           {
               c='L';
           }
       }
       if((n%2!=0)&&(m%2!=0))
       {
           if(n>m)
           {
               c='D';
           }
           else
           {
               c='R';
           }
       }
       if((n%2!=0)&&(m%2==0))
       {
           if(n>m)
           {
               c='U';
           }
           else
           {
               c='R';
           }
       }
       if((n%2==0)&&(m%2!=0))
       {
           if(n>m)
           {
               c='D';
           }
           else
           {
               c='L';
           }
       }
       printf("%c\n",c);

}
return 0;
}



