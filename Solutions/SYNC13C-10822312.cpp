/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x%2==0 || y%2==0){cout<<"Suresh\n";}
        else {cout<<"Ramesh\n";}
    }
    return 0;
}

