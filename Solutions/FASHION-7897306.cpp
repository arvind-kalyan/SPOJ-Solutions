#include<stdio.h>
int main()
{
int t,n,i,j,tmp;
scanf("%d",&t);
while(t--)
{ int sum=0;
scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{scanf("%d",&b[i]);}
 for(i=0;i<(n-1);i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(a[j]<a[j+1])
      {
        tmp =a[j];
        a[j]=a[j+1];
        a[j+1]=tmp;
      }
    }
  }
for(i=0;i<(n-1);i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(b[j]<b[j+1])
      {
        tmp =b[j];
        b[j]=b[j+1];
        b[j+1]=tmp;
      }
    }
  }
 for(i=0;i<n;i++)
{ sum+=a[i]*b[i];}
printf("%d\n",sum);
}
return 0;
}
