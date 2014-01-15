#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    long x,i,count,j;
    int a[5000],k,b[5000];
    scanf("%ld",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    sort(a,a+x);
    count=0;

    for(i=0;i<x;i++)
    {
        k=1;
        if(b[i]==0)
        {
        b[i]=1;count++;
        for(j=i;j<x;j++)
        {
            if((a[j]==(a[i]+k*30))&&(b[j]==0))
            {
                b[j]=1;
                k++;
            }
            if(k>3)
            {
                break;
            }
        }
        }
    }
    cout<<count;

    return 0;
}




