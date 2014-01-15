/*
	Author - Arvind K
	College - BITS Pilani
*/

#include <cstdio>
#include<iostream>
#include <vector>
#include<cstring>
using namespace std;

inline void superFastRead (int *a)
{
    char c = 0;
    while(c<33)
    c = fgetc(stdin);
    *a = 0;
    while(c>33)
    {
               *a = *a*10 + c - '0';
               c = fgetc(stdin);
    }
}

int tree[40003];
int t,n,u,q,id,l,r,val;

int read(int idx){
	int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

void update(int idx ,int val){
	while (idx <= n){
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int main()
{    superFastRead(&t);
    while(t--)
    {   superFastRead(&n);
        superFastRead(&u);
        memset(tree,0,sizeof tree);
        for(int i=0;i<u;i++){
            superFastRead(&l);
            superFastRead(&r);
            superFastRead(&val);
            l++;r++;
           update(l,val);
           update(r+1,-1*val);
        }
        superFastRead(&q);
       for(int i=0;i<q;i++)
        {
            superFastRead(&id);
            id++;
            cout<<read(id)<<endl;
        }
    }
    return 0;
}

