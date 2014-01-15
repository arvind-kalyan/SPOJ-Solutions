/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k , len, n, t, tmp;
	char ar[50];
	scanf("%s %d", &ar, &n);
	while(ar[0]!='.')
	{
		len = strlen(ar);
		for(j=0;j<len;j++)
		{
			tmp=j;
			for(k=tmp;k<len;k++)
				printf("%c", ar[k]);
			for(i=0;i<n-1;i++)
				printf("%s", ar);
			for(k=0;k<tmp;k++)
				printf("%c", ar[k]);
			printf("\n");
		}
		scanf("%s %d", &ar, &n);
	}
	return 0;
}
