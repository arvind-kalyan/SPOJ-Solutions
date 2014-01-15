/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int ar[100004];
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++) scanf("%d",&ar[i]);
        sort(ar, ar+n);
        int c=0;
        for(i=0;i<n;i++)
        {
            int temp= m-ar[i];
            if(temp == ar[i]) c=c-1;
            if(binary_search(ar+i,ar+n,temp)) c=c+1;
        }
        printf("%d\n",c);
    }
    return 0;
}

