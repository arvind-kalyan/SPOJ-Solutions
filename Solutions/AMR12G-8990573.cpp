#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <numeric>
#include <stack>
#include <functional>
#include <bitset>
#include <iomanip>

#include <ctime>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cstring>
#include <cstdlib>

using namespace std;


#define foR(i,frm,upto) for( int i=(frm),_i=(upto);(i) < (_i) ; ++i )
#define foD(i,frm,upto) for( int i=(frm),_i=(upto);(i) >= (_i) ; --i )
#define foit(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define Int long long
#define pb push_back
#define SZ(X) (int)(X).size()
#define LN(X) (int)(X).length()
#define mk make_pair
#define dbg(...)       printf(__VA_ARGS__)
#define SET( ARRAY , VALUE ) memset( ARRAY , VALUE , sizeof(ARRAY) )
#define line puts("")

inline void wait ( double seconds ) {
    double endtime = clock() + ( seconds * CLOCKS_PER_SEC );
    while ( clock() < endtime ) {
        ;
    }
}
template<class T>
    inline T fastIn() {
    register char c=0;
    register T a=0;
    bool neg=false;
    while ( c<33 ) c=getchar();
    while ( c>33 ) {
        if ( c=='-' ) {
            neg=true;
        } else {
            a= ( a*10 ) + ( c-'0' );
        }
        c=getchar();
    }
    return neg?-a:a;
}
int const MXN=55;
int row[MXN];
int R,C,K;
inline void read() {
    R=fastIn<int>(),C=fastIn<int>(),K=fastIn<int>();
    SET ( row,0 );
    foR ( i,0,R ) {
        char ch;
        foR ( j,0,C ) {
            cin>>ch;
            if ( ch=='*' ) {
                ++row[i];
            }
        }
    }
}
inline void proc() {
    while ( K>0 ) {
        sort ( row,row+R, less<int>() );
        row[0] = C-row[0];
        --K;
    }
    cout<< accumulate ( row,row+R,0 ) <<"\n";
}
int main() {
    int kase = 1;
#if defined( xerxes_pc )
    if ( !freopen ( "in1", "r", stdin ) )
        puts ( "error opening file in " ), assert ( 0 );
    kase = 1;
#endif
    kase=fastIn<int>();
    foR ( i,0,kase ) {
        read();
        proc();
    }
    return 0;
}
