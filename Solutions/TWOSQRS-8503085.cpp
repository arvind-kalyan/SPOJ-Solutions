/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <stdio.h>
using namespace std;
int main() {
    int T;
    long long N;
    scanf("%d",&T);
    loop: while (T--) {
        scanf("%lld",&N);
        bool good = true;
        for (long long i=2; i*i<=N; i++) {
            int ct = 0;
            while (N%i==0) {
                ct++;
                N/=i;
            }
            if (i%4==3 && ct%2==1) {
                good = false;
                break;
            }
        }
        if (N%4==3) good = false;
        if (good) printf("Yes\n\n");
        else printf("No\n\n");
}    }



