#include<cstdio>
#include<cmath>
#define mod 1000000007
using namespace std;
long long int add(long long int p,long long int q)
{
    if(p==q) return (p+q)/2;
    else return (q*(q+1)/2)-(p*(p-1)/2);
}
int main()
{
    int t,i,cr,cl;
    long long int l,r,s,b,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&l,&r);
        s=l;b=r;sum=cr=cl=0;
        while(b) {cr++;b/=10;}
        while(s) {cl++;s/=10;}
        if(l==r) sum=((cl+cr)/2)*((l+r)/2);
        else if(cl==cr) sum=((cl+cr)/2)*add(l,r);
        else sum=(cl*add(l,pow(10,cl)-1))+(cr*add(pow(10,cr-1),r));
        for(i=cl+1;i<cr;i++)
        sum+=i*add(pow(10,i-1),pow(10,i)-1);
        printf("%lld\n",sum%mod);
    }
    return 0;
}
