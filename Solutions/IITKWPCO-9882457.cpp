/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int a[103],exp[103],n,t,i,j,cnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(exp,0,sizeof(exp));
        for(i=0;i<n;i++){scanf("%d",&a[i]);}
        cnt=0;
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(exp[i]==0)
            {
            for(j=i+1;j<n;j++)
            {
                if((a[j]==2*a[i])&&(exp[j]==0)){cnt++;exp[j]=1;break;}
            }
            exp[i]=1;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}


