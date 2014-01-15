#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
 
template<class T> void checkmax(T &a,T b){if(b>a) a=b;}
 
char a[1001];
char b[1001];
short dp[1001][1001][2];
short lmatch[1001][1001];
 
int main() {
	while(true)
	{
		int K;
		scanf("%d\n",&K);
		if(!K)break;
		gets(a);
		gets(b);
		int l1=strlen(a),l2=strlen(b);
		for(int i=0;i<l1;i++) 
			for(int j=0;j<l2;j++) 
				lmatch[i+1][j+1] = (a[i]==b[j]) ? 1 + lmatch[i][j] : 0;
		/*
		dp[i][j][0] denotes the length of LCS which follows the constraint that each 
		segment of LCS except the last one is of length>=K and the last segment of it 
		can be of any length>=0 but it should end at index i,j of two string 'a' and 'b' 
		respectively.

		dp[i][j][1] denotes the length of LCS which strictly follows the constraint
		given by problem that each segment of it will be of length>=K
		*/
		for(int i=0;i<l1;i++) for(int j=0;j<l2;j++)
		{
			dp[i + 1][j + 1][0] = dp[i + 1][j + 1][1] = max(dp[i][j + 1][1], dp[i + 1][j][1]);
 
			if (a[i]==b[j])
			{
				checkmax(dp[i + 1][j + 1][0], (short) (1 + dp[i][j][0]));
 
				if (lmatch[i+1][j+1] >= K)
					checkmax(dp[i + 1][j + 1][1], (short) (K + dp[i + 1 - K][j + 1 - K][0]));
			}
		}
		printf("%d\n",dp[l1][l2][1]);
	}
	return 0;
}
