/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const char fi[] = "PRIME1.INP";
const int MAXN = 32000;
 
bool c[MAXN];
int p[MAXN];
int np;
 
void init()
{
    np = 0;
    memset(c,true,sizeof(c));
    for (int i=2;i<MAXN;i++)
        if (c[i])
        {
            p[np++] = i;
            for (int j=i*i;j<MAXN;j+=i)
            {
                c[j] = false;
            }
        }
    //for (int i=0;i<np;i++)
        //cout << p[i] << endl;
}
 
bool crange[100001];
 
void solve()
{
    init();
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        memset(crange,true, sizeof(crange));
        int k = 0;
        b++;
        while (p[k]*p[k] < b)
        {
            int start = a/p[k]*p[k];
            if (start < a) start += p[k];
            if (start == p[k]) start *= start;
            for (int i=start;i<b;i+=p[k])
            {
                crange[i-a] = false;
            }
            k++;
        }
        int t = b-a;
        for (int i=a;i<b;i++)
            if (crange[i-a] && i > 1)
                printf("%d\n",i);
        printf("\n");
    }
}
 
int main()
{
    //freopen(fi,"r", stdin);
    solve();
    return 0;
}
 
