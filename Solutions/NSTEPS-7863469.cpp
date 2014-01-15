/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main()
{
    int t;
    int x,y,res;
    scanf("%d",&t);
    while(t--)
    {   int flag1=0,flag2=0;
        scanf("%d %d",&x,&y);
        if(x>=00 && y>=0 && y<=10000 && x<=10000 ){
        if(x%2==0){flag1=1;}
        if(y%2==0){flag2=1;}
        if(x==0 && y==0){printf("0");}
        else if(x==y && x!=0 && y!=0 && flag1==0 && flag2==0){res=2*x-1; printf("%d",res);}
        else if(x==y && x!=0 && y!=0 && flag1==1 && flag2==1){res=2*x; printf("%d",res);}
        else if(x-y==2 && flag1==0 && flag2==0){res=x+y-1;printf("%d",res); }
        else if(x-y==2 && flag1==1 && flag2==1){res=x+y;printf("%d",res); }
        else {printf("No Number");}
        if(t>0){printf("\n");}
    }
    }
return 0;
}



