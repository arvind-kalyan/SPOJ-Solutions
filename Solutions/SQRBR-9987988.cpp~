#include<iostream>
#include<cstring>

using namespace std;

int d,n,k,j;
int op[50],dp[50][50];

int f(int pos, int open)
{
    if(open<0) return 0;
    if(pos==n) return (open==0);
    int &ret = dp[pos][open];
    if(ret!= -1) return ret;
    if(op[pos]) return ret = f(pos+1,open+1);
    return ret = f(pos+1,open+1)+f(pos+1,open-1);
}

int main()
{
    cin>>d;
    while(d--)
    {
        cin>>n>>k;
        n = n << 1;
        memset(dp,-1,sizeof dp);
        memset(op,0,sizeof op);
        for(int i=0; i<k; i++)
        {
            cin>>j;
            op[j-1]=1;
        }
        cout<<f(0,0)<<endl;
    }
    return 0;
}

