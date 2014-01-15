/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

#define MAX 1001
int main()
{
	int t, n, time, i;
	char s[50];
	double a[MAX], minA, sec, temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin >> s >> a[i];
		sort(a,a+n);
		minA=a[n-1]-a[0];
		for(i=1;i<n;i++)
		{
			temp=(360.00-a[i]+a[i-1]);
			minA = min(minA, temp);
		}
		sec = minA*12.0;
		time = (int)(ceil(sec)+0.99);
		cout<<time<<endl;
	}
	return 0;
}

