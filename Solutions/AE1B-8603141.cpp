/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<functional>
#include<algorithm>
using namespace std;
main()
{
    int n,k,s,i;
    scanf("%d %d %d",&n,&k,&s); int a[n];
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    int tables=k*s;
    sort(a,a+n,greater<int>());
    int sum=0,c=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
       c++;
      if(sum>=tables){break;}
    }
    printf("%d",c);
}

