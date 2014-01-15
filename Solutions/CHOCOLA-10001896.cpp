# include <cstdio>
# include <algorithm>

using namespace std;

int x[1000],y[1000];
int best[1000][1000];

int main()
{
	int T;
	scanf("%d",&T);
	
	for(int t=0;t<T;t++)
	{
		int M,N;
		scanf("%d%d",&M,&N);
		
		for(int i=0;i<M-1;i++)
			scanf("%d",x+i);
		for(int j=0;j<N-1;j++)
			scanf("%d",y+j);
		
		sort(x,x+M-1);
		reverse(x,x+M-1);
		sort(y,y+N-1);
		reverse(y,y+N-1);
		
		best[M-1][N-1]=0;
		for(int i=M-2;i>=0;i--)
			best[i][N-1]=best[i+1][N-1]+x[i];
		for(int j=N-2;j>=0;j--)
			best[M-1][j]=best[M-1][j+1]+y[j];
		
		for(int i=M-2;i>=0;i--)
		{
			for(int j=N-2;j>=0;j--)
			{
				best[i][j]=min(x[i]+best[i+1][j]+best[M-1][j],y[j]+best[i][j+1]+best[i][N-1]);
			}
		}
		printf("%d\n",best[0][0]);
	}
	return 0;
}

