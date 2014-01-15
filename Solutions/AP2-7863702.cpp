/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
using namespace std;
int main(){long long t,a,c,n,first,d,i,b;cin>>t;
while(t!=0){
cin>>a>>b>>c;n=c*2/(a+b);cout<<n<<endl;d=(b-a)/(n-5);first=a-(2*d);
for(i=0;i<n;i++){
cout<<first+(i*d)<<" ";
}
t=t-1; }
return 0;
}
