/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
    if(a>b){return a;}
    else {return b;}
}

int min(int a,int b)
{
    if(a<b){return a;}
    else {return b;}
}

int main()
{
    int l,i,n,j,m,ans,k;
    int c[1003],d[1003],r[1003],h[1003],dp[1003];
    int t,flag=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&n);
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&c[i],&r[i],&d[i]);
            for(j=c[i]-r[i]-1;j<c[i]+r[i];j++)
            {
                if((j>=0)&&(j<l))
                {
                  dp[j]+=d[i];
                }


            }
        }
        //for(i=0;i<l;i++){printf("%d ",dp[i]);}
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&h[i]);
            flag=0;
            for(j=1;j<=l;j++)
            {

                h[i]-=dp[j-1];

                if(h[i]<=0)
                {flag=1;ans=j;break;}

            }
            if(flag==1){printf("%d\n",ans);}
            else {printf("Bloon leakage\n");}
        }
    }
    return 0;

    }


