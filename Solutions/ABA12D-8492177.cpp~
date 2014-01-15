#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{ int a,b,i;
int x[]={2, 4, 9, 16, 25, 64, 289, 729, 1681, 2401, 3481, 4096, 5041, 7921, 10201, 15625, 17161, 27889, 28561, 29929, 65536, 83521, 85849, 146689, 262144, 279841, 458329, 491401, 531441, 552049, 579121, 597529, 683929, 703921, 707281, 734449, 829921, 1190281};
int len=sizeof(x)/sizeof(x[0]);
int t;scanf("%d",&t);
while(t--)
{
    scanf("%d %d",&a,&b);
    int c=0;
    for(i=0;i<len;i++)
    {
        if(x[i]>=a && x[i]<=b){c++;}
    }
    printf("%d",c);
    if(t!=0){printf("\n");}
}
return 0;
}

