/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
#define MOD 1000000007
typedef long long LL;
template<class T>
    inline T fastIn() {
    register char c=0;
    register T a=0;
    bool neg=false;
    while ( c<33 ) c=getchar();
    while ( c>33 ) {
        if ( c=='-' ) {
            neg=true;
        } else {
            a= ( a*10 ) + ( c-'0' );
        }
        c=getchar();
    }
    return neg?-a:a;
}


LL modPow(LL base,LL exponent)
{
        LL result = 1;
        while(exponent > 0)
        {
                if(exponent&1)
                {
                        LL temp = result*base;
                        result = temp%MOD;
                }
                exponent >>= 1;
                base = (base*base)%MOD;
        }
        return result%MOD;
}

int main()
{
        int t;
        LL n;
        t=fastIn<int>();
        while(t--)
        {
                n=fastIn<long long>();
                int rem = n%3;
                LL ans = modPow(3,n/3);
                if(rem == 1 && n > 1)
                {
                        ans*=4;
                        ans%=MOD;
               ans*=333333336;
                ans%=MOD;
                }
                else if(rem == 2)
                {
                        ans<<=1;
                        ans%=MOD;
                }
                printf("%lld\n",ans);
        }
        return 0;
}

