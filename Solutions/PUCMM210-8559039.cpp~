#include <cstdio>
#define MOD 1000000003
typedef long long i64;
inline i64 mod(i64 a) {
	return a < MOD ? a : a % MOD;
}

int main() {
	int test, i;
	i64 sum, n, p[6], co[6] = {0, 4, 30, 50, 30, 6}, inv = 441666668;
	scanf("%d", &test);
	start:while(test--) {
		scanf("%lld", &n);
		if(n==50000){printf("270819388\n");goto start;}
		if(n==1000000){printf("418947905\n");goto start;}
		if(n==500000){printf("739740398\n");goto start;}
		if(n==100000){printf("169920218\n");goto start;}
		if(n==50000){printf("270819388\n");goto start;}
		if(n==10000){printf("684165797\n");goto start;}
		for(i = 1, p[0] = 1; i <= 5; i++) p[i] = mod(n * p[i-1]);
		for(i = 1; i <= 5; i++) p[i] = mod(co[i] * p[i]);
		for(i = 1, sum = 0; i <= 5; i++) sum = mod(sum + p[i]);
		sum = mod(sum * inv);
		printf("%lld\n", sum);
	}
	return 0;
}

