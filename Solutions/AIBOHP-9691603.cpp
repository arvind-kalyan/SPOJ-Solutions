/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
#define MAX 6106
using namespace std;

#ifdef _WINDOWS
inline int getchar_unlocked() { return getchar(); }
#endif
template<class T>
    inline T fastIn() {
    register char c=0;
    register T a=0;
    bool neg=false;
    while ( c<33 ) c=getchar();
    while ( c>33 ) {
        if ( c=='-' ) {
            neg=true;
        } else {
            a= ( a*10 ) + ( c-'0' );
        }
        c=getchar();
    }
    return neg?-a:a;
}
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;

    while (c < 33)
        c = getchar_unlocked();

    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }

    str[i] = '\0';
}
int dp[2][MAX];
char str[MAX];
int N;

int solve()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(str[i-1]==str[N-j])
            {
                dp[i&1][j]= 1+dp[(i-1)&1][j-1];
            }
            else
            {
                dp[i&1][j]=max(dp[(i-1)&1][j], dp[i&1][j-1]);
            }
        }
    }
    return dp[N&1][N];
}

int main()
{   int T;
    T=fastIn<int>();
    while(T--)
    {
      fastRead_string(str);
      N=strlen(str);
      memset(dp, 0, sizeof dp);
      printf("%d\n",N-solve());
    }



    return 0;
}

