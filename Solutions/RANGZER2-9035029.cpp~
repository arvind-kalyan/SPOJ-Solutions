#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
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
unsigned zeroCount(unsigned long long k)
{
    unsigned zeros = 0;
    while(k) {
        zeros += (k % 10) == 0;
        k /= 10;
    }
    return zeros;
}

unsigned long long Z(unsigned long long n)
{
    if (n == 0) {
        return 0;
    }
    if (n <= 10) {
        return 1;
    }
    unsigned long long k = n/10, r = n%10;
    unsigned long long zeros = k + 10*(Z(k)-1);
    if (r > 0) {
        zeros += r*zeroCount(k) + 1;
    }
    return zeros;
}
unsigned long long zeros_in_range(unsigned long long low, unsigned long long high)
{
    return Z(high+1) - Z(low);
}
int main()
{
    int t;
    unsigned long long x,y;
    t=fastIn<int>();
    while(t--)
    {
        x=fastIn<unsigned long long>();
        y=fastIn<unsigned long long>();
        unsigned long long res=zeros_in_range(x,y);
        cout<<res<<endl;
    }

return 0;
}

