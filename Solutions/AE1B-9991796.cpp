/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <cstdio>
#include <algorithm>
using namespace std;

#define MAX 1111

int main()
{
	int arr[MAX], n, s, t, i, r, d, c;
	scanf("%d%d%d", &n, &s, &t);
	for(i=0; i<n; i++) scanf("%d", &arr[i]);
	sort(arr, arr+n);
	r = s*t;
	d = c = 0;
	for(i=n-1; i>=0; i--)
	{
		d += arr[i];
		c++;
		if(d >= r) break;
	}
	printf("%d\n", c);
	return 0;
}
