#include<iostream>
#include<cstdio>
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    
    return (josephus(n - 1, k+1) + k-1) % n + 1;
}
int main()
{
int t; scanf("%d",&t);
while(t--)
{
	int n;scanf("%d",&n);
	printf("%d\n",josephus(n,1));
}
return 0;
}
