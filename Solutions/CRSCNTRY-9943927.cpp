#include <cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int getLCSLength (int agnes[], int a, int tom[], int t)
{
        int LCS[a+1][t+1];
        for (int i = 0; i <= a; i++)
                LCS[i][0] = 0;
        for (int i = 0; i <= t; i++)
                LCS[0][i] = 0;
        for (int i = 1; i <= a; i++)
        {
                for (int j = 1; j <= t; j++)
                {
                        if (agnes[i-1] == tom[j-1])
                                LCS[i][j] = LCS[i-1][j-1] + 1;
                        else
                                LCS[i][j] = max (LCS[i-1][j], LCS[i][j-1]);
                }
        }
        return LCS[a][t];
}

int main ()
{
        int d; scanf("%d",&d);
        while (d--)
        {
                int agnes[2001], m = 0;
                int temp = 1, a = 0;
                while (temp)
                {
                        scanf("%d",&temp);
                        agnes[a++] = temp;
                }
                while (true)
                {
                        int tom[2001], t = 1;
                        scanf("%d",&temp);
                        if (temp == 0)
                                break;
                        tom[0] = temp;
                        temp = 1;
                        while (temp)
                        {
                               scanf("%d",&temp);
                                tom[t++] = temp;
                        }
                        m = max (m, getLCSLength (agnes, a-1, tom, t-1));
                }
                printf ("%d\n", m);
        }
        return 0;
}

