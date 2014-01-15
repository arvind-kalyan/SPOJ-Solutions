#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<0){return 0;}
        int x=192;
        unsigned long long res= x+(n*250)-250;
        cout<<res;
        if(t==0){return 0;}
        else{cout<<"\n";}

    }
return 0;
}




