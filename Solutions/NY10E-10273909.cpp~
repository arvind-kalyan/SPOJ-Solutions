#include<bits/stdc++.h>
using namespace std;

long long nCk(int n, int k)
{  
    long long C[n+1][k+1];
    int i,j;
    for(i=0;i<=n;i++)
    { for(j=0;j<=min(i,k);j++)
        { if(j==0 ||j==i)
                C[i][j]=1;
        else
            C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
    }
    return C[n][k];
}

int main()
{   int tc;
    cin >> tc;
    int t,n;
    while(tc--){

    cin >> t >> n;

    cout <<t << " " << nCk(9+n,9) << endl;

    }
    return 0;

}

