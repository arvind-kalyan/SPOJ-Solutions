#include<stdio.h>

int main()
{
    int n;
    int sum;
    while(n!=0)
    {
        scanf("%d",&n);
        sum=(n+1)*(n)*(2*n+1)/6;
        if(n!=0)
        {printf("%d\n",sum);}
    }
    return 0;
}

