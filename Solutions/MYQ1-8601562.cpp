
#include<stdio.h>
main()
{    int seat,row,j,i,n,t;
    char w,dir;
    scanf("%d",&t);
    while(t--)
    {  scanf("%d",&seat);
        if(seat==1)
        { printf("poor conductor\n"); }
        else
        {  n=seat%10;
           if((n==1)||(n==2))
           {   w='W';
               dir='L';
           }
           else if((n==0)||(n==3))
           {  w='A';
               dir='L';
           }
           else if((n==4)||(n==9))
           {   w='A';
               dir='R';
           }
           else if((n==5)||(n==8))
           {  w='M';
               dir='R';
           }
           else if((n==6)||(n==7))
           {   w='W';
               dir='R';
           }
           if(seat<=6)
           { row=1; }
           else
           {row=(seat-seat%5)/5;
            if((n==9)||(n==8)||(n==7)||(n==2)||(n==3)||(n==4))
            { row++; }
           }
           printf("%d %c %c\n",row,w,dir);
        }
    }
}

