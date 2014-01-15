#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int gcd(int max, int min)
{
    if(max%min==0)
		return min;
	else
		return gcd(min,max%min);
}

int checkrep(string s,int len, int rep)
{
	for(int i=0;i<len;i++)
	{
		if(s[i]!=s[i%rep])
			return 0;
	}
	return 1;
}

int checksub(string big, int biglen, string small, int smalllen)
{
	for(int i=0;i<biglen;i++)
	{
		if(big[i]!=small[i%smalllen])
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t>0)
	{
		t--;
		char a[100001];
		char b[100001];
		int lena;
		int lenb;
		int i=0;
		char c;
		while((c=getchar())!=' ')
		{
			a[i++]=c;
		}
		a[i]='\0';
		lena= i;
		i = 0;
		while((c=getchar())!='\n')
		{
			b[i++]=c;
		}
		b[i]='\0';
		lenb = i;
		
		//printf("A is -%s-\n",a);
		//printf("B is -%s-\n",b);
		
		int maxlen;
		char* maxstr;
		int minlen;
		char* minstr;
		if(lena>lenb)
			{
				maxlen = lena;
				minlen = lenb;
				maxstr =  a;
				minstr = b;
			}
		else
			{
				maxlen = lenb;
				minlen = lena;
				maxstr = b;
				minstr = a;
			}
		if(maxlen%minlen==0)
			{
				if(checksub(maxstr,maxlen,minstr,minlen))
					printf("YES\n");
				else
					printf("NO\n");
			}
		else
			{
				int x = gcd(maxlen,minlen);
				if(checkrep(maxstr,maxlen,x)&&checkrep(minstr,minlen,x))
					printf("YES\n");
				else
					printf("NO\n");
			}
	}
	return 0;
}
