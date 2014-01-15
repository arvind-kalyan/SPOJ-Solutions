#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<map>
#include<cctype>
using namespace std;
#define pb push_back
#define all(s) s.begin(),s.end()
#define f(i,a,b) for(int i=a;i<b;i++)
#define F(i,a,b) for(int i=a;i>=b;i--)
#define PI 3.1415926535897932384626433832795
#define INF 1000000005
#define BIG_INF 7000000000000000000LL
#define mp make_pair
#define eps 1e-9
#define LL long long
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define mod 1000000007
#define MAX 1005
 
int k,a,b;
int len[MAX][MAX],seg[MAX][MAX];
int solve(char A[],char B[])
{
    f(i,1,a+1)
    {
        f(j,1,b+1)
        {
            seg[i][j]=0;
            len[i][j]=max(len[i][j-1],len[i-1][j]);
            if(A[i-1]==B[j-1])
            {
                seg[i][j]=seg[i-1][j-1]+1;
                if(seg[i][j]>=k)
                {
                    f(p,k,seg[i][j]+1)
                    {
                        len[i][j]=max(len[i][j],len[i-p][j-p]+p);
                    }
                }
            }
        }
    }
    return len[a][b];
}
 
 
 
int main()
{
    while(1){
    si(k);
    if(k==0) break;
    char A[MAX],B[MAX];
    scanf("%s",A);
    scanf("%s",B);
    a=strlen(A);
    b=strlen(B);
    printf("%d\n",solve(A,B));
    }
    return 0;
}
 
