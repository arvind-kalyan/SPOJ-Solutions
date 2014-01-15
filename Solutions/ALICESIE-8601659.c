/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {   scanf("%d",&n);
        if(n%2==0)
        {
            printf("%d\n",n/2);
        }
        else printf("%d\n",n/2+1);
    }

}

