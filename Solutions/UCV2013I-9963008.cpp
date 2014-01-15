/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<math.h>
 
int main() {
double n, r;
double pi, k;
pi = 3.141592653589793;
while (1) {
scanf("%lf %lf", &r, &n);
if (n == 0 && r == 0) {
break;
}
k = (2 * r * r) / (1 - cos(pi / n));
k = pow(k, .5);
printf("%.2lf\n", k);
}
return 0;
}
