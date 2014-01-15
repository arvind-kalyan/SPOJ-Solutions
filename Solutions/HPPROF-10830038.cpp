/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char a[25];
    int i,len;
    int dp[25];
    scanf("%s",&a);
    dp[0]=1;
    len=strlen(a);
    for(i=1;i<len;i++)
    {
      if((a[i]-'0')==0)
      {
          if(((a[i-1]-'0')>0)&&((a[i-1]-'0')<3))
          {
              if(i==1){dp[i]=dp[i-1]+1;}
              else {dp[i]=dp[i-1]+dp[i-2];}
          }
          else {dp[i]=dp[i-1];}
      }
      else
      {
          if(((a[i-1]-'0')>0)&&((a[i-1]-'0')<2))
          {
              if(i==1){dp[i]=dp[i-1]+1;}
              else {dp[i]=dp[i-1]+dp[i-2];}
          }
          else {dp[i]=dp[i-1];}
      }
    }
    printf("%d\n",dp[len-1]);
    return 0;
}


