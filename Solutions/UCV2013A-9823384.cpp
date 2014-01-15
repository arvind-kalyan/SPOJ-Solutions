#include<iostream>
#include<stdio.h>
using namespace std;
inline unsigned scan(){unsigned z=0;char c;do{ c=getchar_unlocked(); } while(c<'0');for(;c>='0';c=getchar_unlocked()) z = (z<<3) + (z<<1) + (c&15);return z;}
int main(){
    int n,k;
    while(1){
             n=scan();k=scan();
             if(!n && !k)break;
             long long int t=1,t2=0;
             for(int i=1;i<=k;i++){
                     t=(t%1000000007*n)%1000000007;
                     t2 =(t2%1000000007 + t%1000000007)%1000000007;
                     }
             printf("%lld\n",t2);
             
             }
    }
 
