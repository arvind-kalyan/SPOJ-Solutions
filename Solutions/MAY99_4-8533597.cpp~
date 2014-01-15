#include<stdio.h>
#define MOD 10000007
long long int tab[101][101];
long long int nCr( int n, int k )
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
    long long int ans;
    while((scanf("%d %d",&n,&r)) != EOF)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                tab[i][j] = 0;
        if( r > n){printf("-1\n");}
        else if(n==r){printf("1\n");}
        else
        {ans=nCr(n-1,r-1)%MOD;
         printf("%lld\n",ans);
        }
    }
return 0;
}

