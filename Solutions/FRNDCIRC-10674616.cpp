/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

void fastint( register int *n ){
	register char c;
	*n = 0;
	while(!isdigit(c = getc( stdin )));
	do {
		switch( c ){
			case ' ': case '\n': return;
			default: (*n) *= 10; (*n) += ( c - '0' ); break;
		}
	}while( ( c = getc( stdin ) ));
}

class UFDS {
private:
        vector<int> p, rank, setSizes;
        int numSets;
public:
        UFDS(int N) {
                numSets = N;
                rank.assign(N, 0);
                p.assign(N, 0);
                for (int i = 0; i < N; i++)
                        p[i] = i;
                setSizes.assign(N, 1);
        }
        int findSet(int i) {
                return (p[i] == i) ? i : p[i] = findSet(p[i]);
        }
        bool isSameSet(int i, int j) {
                return findSet(i) == findSet(j);
        }
        void unionSet(int i, int j) {
                if (!isSameSet(i, j)) {
                        int x = findSet(i), y = findSet(j);
                        if (rank[x] > rank[y]) {
                                setSizes[findSet(x)] += setSizes[findSet(y)];
                                p[y] = x;
                        } else {
                                setSizes[findSet(y)] += setSizes[findSet(x)];
                                p[x] = y;
                                if (rank[x] == rank[y])
                                        rank[y]++;
                        }
                        numSets--;
                }
        }
        int setSize(int i) {
                return setSizes[findSet(i)];
        }
        int numDisjointSets() {
                return numSets;
        }
};

map<string, int> nameMap;

int main() {
        int tc, f, count;
        char s1[25], s2[25];
        string s1s, s2s;
        fastint(&tc);
        while (tc--) {
                fastint(&f);
                UFDS uf(f * 2);
                nameMap.clear();
                count = 0;

                for (int i = 0; i < f; i++) {
                        scanf("%s %s", s1, s2);
                        s1s = string(s1);
                        s2s = string(s2);

                        if (!nameMap.count(s1s))
                                nameMap[s1s] = count++;
                        if (!nameMap.count(s2s))
                                nameMap[s2s] = count++;

                        uf.unionSet(nameMap[s1s], nameMap[s2s]);
                        printf("%d\n", uf.setSize(nameMap[s1]));
                }
        }

        return 0;
}

