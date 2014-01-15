/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

long long cut(long long n)
{
    long long i=3,ans;
    if(n<=1){return 0;}
    if(n==2){return 1;}
    else
    {
      ans=2;
      while(i<=n)
      {
        i+=ans;

        if(i>n){break;}
        ans++;
      }
      return ans;
    }
}
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<cut(n)<<"\n";

    }
    return 0;

}



