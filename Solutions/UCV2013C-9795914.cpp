/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <iostream>
#include<cstdio>
using namespace std;
 
int main() {
    long long int a,b,c,d;
    while(1)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a==0 and b==0 and c==0 and d==0)
        break;
        else
        {
            long long int tn=(b*(b+1)/2)+1;
            long long int ans=0;
            ans=a-tn*c;
            if(ans>=d)
            printf("Farmer Cream will have %lld Bsf to spend.\n",ans);
            else
            printf("The firm is trying to bankrupt Farmer Cream by %lld Bsf.\n",(d-ans));
            
        }
    }
        
        return 0;
}
