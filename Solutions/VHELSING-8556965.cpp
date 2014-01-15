/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int t,r;
	double root_2=sqrt(2);
	double ans;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&r);
	    ans=(double)(8*r*r*r*(2-root_2));
	    printf("%0.4f\n",ans);
	}
	return 0;
}

