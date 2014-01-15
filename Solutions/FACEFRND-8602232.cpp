/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
main()
{    int a[101],friends[101],ans=0,i,j;
     int count[10000]={0};
    int n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {        scanf("%d%d",&a[i],&m);
        if(count[a[i]]!=0)
        { ans--;
        }
        count[a[i]]++;
        count[a[i]]++;
        for(j=0;j<m;j++)
        {
            scanf("%d",&friends[j]);
            if(count[friends[j]]==0)
            { ans++;
            }
            count[friends[j]]++;
        }
    }
    printf("%d\n",ans);
}


