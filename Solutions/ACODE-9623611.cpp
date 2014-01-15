#include <iostream>
#include <stdio.h>
#include <cstring>
 
using namespace std;
 
char ch[5001];
unsigned long long dp[5002];
 
int main()
{
	while(true)
	{
		scanf("%s",ch);
		if(ch[0]=='0')
		{
			return 0;
		}
		else
		{
			int len = strlen(ch);
			dp[len+1]=0;
			dp[len]=1;
			
			for(int n=len-1;n>=0;n--)
			{
				dp[n]=0;
				if(ch[n]=='0')
				{
					continue;
				}
			
				if(ch[n]<='9')
				{
					dp[n]=dp[n+1];
				}
				
				if(n<len-1)
				{
					// convert to number
					int num = ch[n]-'0';
					num =num*10+ch[n]-'0';
					
					if(num<=26)
					{
						dp[n]+=dp[n+2];
					}
				}
			}
			
			printf("%llu\n",dp[0]);
		}
	}
}
