
/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
 
typedef long long ll;
#define clr(a,n) memset(a,n,sizeof(a))

using namespace std;
string str;
int n;
int dp[100055];
int fun(int i){
 
    if(i==n){
        return 0;
    }
    int & ret= dp[i];
    if(ret!=-1){
        return ret;
    }else{
        ret=0;
        int sour=0;int sweet=0;
 
        for(int k=i;k<n;++k){
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
 
