/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int checkpalin(vector<char> v)
{
    int n=v.size(),i;
    for(i=0;i<n/2;i++)
    {
        if(v[i]!=v[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
 int t,i,len;
 string s;
 vector<char> v;
 cin>>t;
 while(t--)
 {
     cin>>s;
     len=s.size();
     v.clear();
     v.push_back(s[0]);
     for(i=1;i<len;i++)
     {
         if(s[i]!=s[i-1])
         {
             v.push_back(s[i]);
         }
     }
     if(checkpalin(v)==1){cout<<"YES\n";}
     else {cout<<"NO\n";}
 }
 return 0;
}


