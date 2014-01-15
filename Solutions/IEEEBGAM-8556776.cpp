/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
using namespace std;
int main()
{
    int t,n;
    double ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ans=(double)n/(n+1);
        printf("%0.8f\n",ans);
    }
    return 0;
}

