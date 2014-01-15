/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<stdio.h>
#define MOD 10000007
using namespace std;
int tab[100][100];
int nCr( int n, int k )
{
    if(n<0 || k<0)
        return 0;

    if (tab[n][k] != 0)
        return tab[n][k];

    if (k == 0 || k == n)
            tab[n][k] = 1;
    else
        tab[n][k] = (nCr(n-1,k-1)%MOD + nCr (n-1,k)%MOD)%MOD;

    return tab[n][k];
}
int main()
{
     int n,r,i,j;
    int ans;
    while((scanf("%d %d",&n,&r)) != EOF)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                tab[i][j] = 0;
        if( r > n){printf("-1\n");}
        else if(r<0 || n<0){printf("-1\n");}
        else if(n==r){printf("1\n");}
        else
        {ans=nCr(n-1,r-1)%MOD;
         printf("%d\n",ans);
        }
    }
return 0;
}

