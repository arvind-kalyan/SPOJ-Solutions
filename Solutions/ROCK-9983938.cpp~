#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <assert.h>
//__builtin_popcount();
 
typedef long long ll;
 
 
#define fr(i,n) for(int i=0;i<n;++i)
#define frev(i,n) for(int i=n-1;i>=0;--i)
#define clr(a,n) memset(a,n,sizeof(a))
#define pi pair<int,int>
#define pb push_back
#define inf 1<<28;
#define MOD 1000000007;
using namespace std;
string str;
int n;
int dp[100055];
int fun(int i){
 
    if(i==n){//Reached End of String
        return 0;
    }
    int & ret= dp[i];
    if(ret!=-1){
        return ret;
    }else{
        ret=0;
        int sour=0;int sweet=0;
 
        for(int k=i;k<n;++k){//CUT THEN COUNT SWEET & SOUR IN THE RANGE
            if(str[k]=='1')sweet++;
            if(str[k]=='0')sour++;
            if(sweet>sour){
                ret = max(ret,fun(k+1)+sweet+sour);
            }else{
                ret = max(ret,fun(k+1));
            }
        }
        return ret;
    }
 
}
int main (){
 
    int testCases;cin>>testCases;
    while(testCases--){
        clr(dp,-1);
        cin>>n>>str;
        cout<<fun(0)<<endl;
    }
    return 0;
}
 
