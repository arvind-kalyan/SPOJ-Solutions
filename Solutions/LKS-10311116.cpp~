#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
 
int x[2][2000005];
 
int main() 
{
    int k, n, p;
 
    scanf("%d%d", &k, &n);
 
    int w[n], v[n];
 
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &v[i], &w[i]);
    }
 
    memset(x[1], 0, sizeof (x[1]));
    x[0][0] = 0;
    for (int j = 0; j < n; j++) {
        p = j & 1;
        for (int i = 1; i < w[j]; i++) {
            x[p][i] = x[1 - p][i];
        }
        for (int i = w[j]; i <= k; i++) {
            x[p][i] = max(x[1 - p][i], x[1 - p][i - w[j]] + v[j]);
        }
    }
 
    printf("%d\n", x[1 - (n & 1)][k]);
 
	return 0;
}
