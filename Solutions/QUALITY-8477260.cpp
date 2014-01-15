#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	long int a[3],b[3],s,n,t=0;
	while( scanf("%ld %ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]) != EOF)
	{
		t++;
		s=0;
		n=0;
		for(i=0;i<3;i++)
		{
			if(a[i]!=0)
			{
				s=s+a[i]+((b[i]-1)*(1200));
				n++;
			}
		}
		printf("team %ld: %ld, %ld\n",t,n,s);
	}
	return 0;
}
