#include<iostream>
#include<math.h>
using namespace std;
int rev(int a)
{   int temp=a;
    int y=0;
      while(temp)
     {
            temp=temp/10;
            y++;
      }
    int z;
    int x=0;
    while(a)
    {
        z=a%10;
        x+=(z*pow(10,y-1));
        a/=10;
        y--;

    }
   return x;
}

int main()
{  int a[10000][2];
   int n,m,i,j;
   cin>>n;
   int sum[10000];
   for(i=0;i<n;i++)
   {
       cin>>a[i][0]>>a[i][1];

   }
   for(i=0;i<n;i++){
       int r,s;
        r=rev(a[i][0]);
        s=rev(a[i][1]);
       sum[i]=r+s;

   }
   for(i=0;i<n;i++){
    m=rev(sum[i]);
   cout<<"\n"<<m;
   }
   return 0;
}





