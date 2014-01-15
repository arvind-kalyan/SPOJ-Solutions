#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 scanf("%d", &t);
 while (t--) {
   int g, m, i, j;
  scanf("%d %d", &g, &m);
   int god[g], mech[m];
   for (i = 0; i < g; i++)
     scanf("%d", &god[i]);
   for (i = 0; i < m; i++)
       scanf("%d", &mech[i]);
   sort(god, god + g);
   sort(mech, mech + m);
   i =0,j =0;
   while (1) {
       if (god[i] == mech[j])
           j++;
       else {
              if (god[i] < mech[j])
                 i++;
              else
                 j++;
            }
        if (i == g)
             break;
        if (j == m)
             break;
        }
        if (j == m)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
    return 0;
}



