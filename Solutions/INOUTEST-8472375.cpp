/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<stdio.h>
#define gc getchar_unlocked
using namespace std;
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
  int n;
 int a,b;
 long long res;
 scanint(n);
 while(n--)
 {
     scanint(a);scanint(b);
     res=a*b;
     printf("%lld",res);
     if(n!=0){printf("\n");}
 }
 return 0;
}




