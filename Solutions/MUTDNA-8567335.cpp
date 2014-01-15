/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
char s[1000001];
main()
{
int i,ans=0,n;
scanf("%d %s",&n,s);
char x='A';
for(i=n-1;i>0;i--)if(x!=s[i]){if(x!=s[i-1])x=s[i];i--;
ans++;
}
if(s[0]!=x)ans++;
printf("%d",ans);
return 0;
}

