/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<stdio.h>
using namespace std;
#define MOD 1000000007
int main(){
    int n,k;
    while(1){
             scanf("%d %d",&n,&k);
             if(n==0 && k==0) break;
             long long int t=1,t2=0;
             for(int i=1;i<=k;i++){
                     t=(t%MOD *n)%MOD;
                     t2 =(t2%MOD+ t%MOD)%MOD;
                     }
             printf("%lld\n",t2);
             
             }
    }
 
