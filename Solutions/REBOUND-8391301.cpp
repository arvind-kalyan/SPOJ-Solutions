/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    double x,y,z;
    long ans;
    double d;
    scanf("%d",&t);
    while(t--)
    {
        d=0.0;
        scanf("%lf%lf%lf",&x,&y,&z);
        d=(x*z+z*sqrt(x*x+y*(y+2.0*z)))/(y+2.0*z);
        //printf("%lf\n",d);
        if(d-(int)(d)!=0)
        {
            printf("Not this time.\n");
        }
        else
        {
            ans=d;
            printf("%ld\n",ans);
        }
    }
    return 0;
}

