#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int tree[1000005],n,tree2[1000004];

int read(int idx){
    int sum = 0;
    while(idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

void update(int idx, int val){
    while(idx <= n){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int main()
{
    int i,j,k,a,b;
    scanf("%d %d",&n,&k);
    memset(tree,0,sizeof(tree));
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&a,&b);
        update(a,1);
        update(b+1,-1);
    }
    j=0;
    memset(tree2,0,sizeof(tree2));
    for(i=0;i<=n;i++)
    {
        tree2[j++]=read(i);
    }
    sort(tree2,tree2+j);
    
    cout<<tree2[(n/2)+1]<<"\n";
    
    return 0;

}

