/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<math.h>

long long gcd(long long a,long long b)
{
    if(b==0){return a;}
    else {return gcd(b,a%b);}
}

int main()
{
    int t;
    long long n,i,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=n/2;i>=1;i--)
        {
          if((i%2!=0)||(n%2!=0))
          {
              if(gcd(i,n)==1){ans=i;break;}
          }
        }
        printf("%lld\n",ans);
    }
    return 0;
}


