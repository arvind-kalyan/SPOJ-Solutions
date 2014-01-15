/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <stdio.h>
#include<iostream>
int main() {
	int n;
	scanf("%d", &n);

	while(n--) {
		int x;
		scanf("%d", &x);

		int sum=0;
		while(x/=5) sum += x;

		printf("%d\n",sum);
	}
	return 0;
}



