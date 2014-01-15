/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <iostream>
#include <algorithm>
using namespace std;
 
const int MAX=100025;
 
int N,A,B;
int v[MAX];
 
int min2(int a, int b) {
  return a<b?a:b;
}
 
int main(){
	int tc;
	int z=1;
	cin >> tc;
	while(tc--){
		cin >> N >> A >> B;
		unsigned long long int cost,trip,lsal;
		cost = 2*A + N*B;
		trip=2LL*A;
		for(int i=0;i<N;i++)
			cin >> v[i];
		for(int i=1;i<N;i++){
			lsal=v[i]-v[i-1]-1;
			lsal*=B;
			if(lsal<trip)
				cost=cost+lsal;
			else
				cost=cost+trip;	
		}
		cout << "Case #"<< z <<": "<< cost << endl;
		z++;
	}
	return 0;
}
