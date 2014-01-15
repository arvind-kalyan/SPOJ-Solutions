/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<math.h>
#define EPS 0.0000001
int main()
{
    int a,b,n,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        int x=a*a+b*b;
        float m=sqrt(x);
        int ans=m;
        float n=m-(int)m;
        float z=0.0;
        if(n-EPS<z && n+EPS>z){printf("YES %d\n",ans);}
        else{printf("NO\n");}
    }
}

