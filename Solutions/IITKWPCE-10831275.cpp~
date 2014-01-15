#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int palin[2003][2003] ;
int Cuts[2003];
int min(int a,int b)
{
    if(a<b){return a;}
    else {return b;}
}

int minCut(string s) {
   int len = s.size(),i,j;



    memset(palin,0,sizeof(palin));



   Cuts[len] = -1;
   for (i=len-1; i>=0; --i) {
     Cuts[i] = len - i;
     for (j=i; j<len; ++j) {
       if ((s[i]==s[j]) && ((j-i < 2) || (palin[i+1][j-1]==1))) {
         palin[i][j] = 1;
         Cuts[i] = min(Cuts[i], 1+Cuts[j+1]);
       }
     }
   }

   return Cuts[0]+1;
}

int main()
{
    int t,n;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        cin>>s;

        printf("%d\n",minCut(s));
    }
    return 0;
}

