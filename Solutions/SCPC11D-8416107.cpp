/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
int main() {
	int a, b, c;
	while(1){
		scanf("%d %d %d", &a, &b, &c);
		if(a==0 && b==0 && c==0){return 0;}
		else if(a>0 && b>0 && c>0){
		a = a * a, b = b * b, c = c * c;
		if(a + b == c || b + c == a || c + a == b) puts("right");
		else puts("wrong");}
	}
	return 0;
}

