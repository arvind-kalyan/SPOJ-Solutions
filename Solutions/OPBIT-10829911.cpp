#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,x,y,t,i,sum1,sum2,ans;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        a=sqrt(x);
        b=sqrt(y);
        sum1=(((b)*(b))-((b-1)*(b-1)));
        sum2=(((b)*(b))-((b-1)*(b-1)));
        for(i=b-1;i>a;i--)
        {
          sum1=(sum1&(((i)*(i))-((i-1)*(i-1))));
          sum2=(sum2^(((i)*(i))-((i-1)*(i-1))));
        }
        ans=sum1&sum2;
        
        cout<<ans<<"\n";
    }
    return 0;
}
