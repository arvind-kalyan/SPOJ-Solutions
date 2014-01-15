/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    int n,c=1;
    char s[81];
    scanf("%d",&t);
    while(t--)
    {   scanf("%d %s",&n,&s);
        int l=strlen(s);
        for(int i=n-1;i<l;i++)
        {
                s[i]=s[i+1];
        }
        printf("%d %s\n",c,s);c++;
    }

    return 0;
}

