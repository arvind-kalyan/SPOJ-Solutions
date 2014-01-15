/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#define val(s1,s2) ((s2)-(s1)==1 ? ((*(s1))-'0'): (*(s1)-'0')*10+*((s1)+1)-'0')
#define calcc(n1,n2,c) (c == '+' ? n1+n2 : (c=='-' ? n1-n2 : n1 * n2))
#define isop(c) (c == '+' || c=='-' || c=='*')
#define calc (isop(s[1]) ? calcc(val(s, s+1), val(s+2, s+n), s[1]) : calcc(val(s, s+2), val(s+3, s+n), s[2]))
int main(int tc = 1, char* s=0, int n = 0){if((tc == 1 ? scanf("%d\n", &tc)*0+1 : tc) && (tc > 0 ? tc *= (-1) : tc) && 	(((int)(s=(char*)malloc(10)) && scanf("%s", s)*0+1 && (n = strlen(s)) && printf("%d\n",calc)*0+1 && main(tc + 1, 0, 0)) || true
	)	)	{	}}

