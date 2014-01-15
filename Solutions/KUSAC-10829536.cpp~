#include<bits/stdc++.h>
using namespace std;

int calc(int n,int m)
{
    int k,i,j,cnt;
    if(n==0 || m==0){return 0;}
    if(n==m){return 0;}
    if(n%m==0){return 0;}
    if(n>m)
    {
        k=n/m;
        return calc(n-m*k,m);
    }
    if(m>n)
    {
        k=m*n;
        cnt=0;
        for(i=0;i<=k;i+=n)
        {
           if(i%m!=0 && i!=0)
           {
             cnt++;
           }
        }
        return cnt;
    }
}

int main()
{
    int n,m,k,i,j,ans;


    cin>>n>>m;
    ans=calc(n,m);
    cout<<ans<<"\n";

    return 0;
}



