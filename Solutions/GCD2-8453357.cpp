#include<stdio.h>
#include<string.h>
 
int gcd(int a,int b)
{
    if(b==0)      return a;
    else          return gcd(b,a%b);
}
int main()
{
    int t,n,j,mod;char s[255];
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d%s",&n,s);
              if(n==0)           printf("%s\n",s);
              else
              {
                  mod=0;j=0;
                  while(s[j]!='\0')
                  {
                                   mod=(mod*10+(s[j]-48))%n;
                                   j++;
                                   }
                                   
                                   printf("%d\n",gcd(n,mod));
                                   }
                                   }
                                   
                                   return 0;
                                   }
                                   
                  
