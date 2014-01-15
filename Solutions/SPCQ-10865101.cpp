#include<bits/stdc++.h>
using namespace std;


int sumdig(unsigned long long a)
{
 int sum=0;
 while(a>0)
 {
     sum+=a%10;
     a=a/10;
 }
 return sum;
}


int main()
{
    int t;
    ios::sync_with_stdio(0);
    unsigned long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(1)
        {
            if(n%sumdig(n)==0)
            {
                cout<<n<<"\n";break;
            }
            n++;
        }
    }
    return 0;
}

