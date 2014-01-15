#include <cstdio>
#include <algorithm>
using namespace std;
 
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int h, w;
    scanf("%d%d", &h, &w);
    static int a[100][100];
    for (int i = 0; i < h; ++i)
      for (int j = 0; j < w; ++j)
        scanf("%d", &a[i][j]);
    for (int i = h-2; i >= 0; --i)
      for (int j = 0; j < w; ++j) {
        int x = a[i+1][j];
        if (j-1 >= 0)
          x = max(x, a[i+1][j-1]);
        if (j+1 < w)
          x = max(x, a[i+1][j+1]);
        a[i][j] += x;
      }
    int res = 0;
    for (int j = 0; j < w; ++j)
      res = max(res, a[0][j]);
    printf("%d\n", res);
  }
}
