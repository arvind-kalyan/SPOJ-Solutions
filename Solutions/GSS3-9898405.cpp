#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 50005

struct data{
    int sum,pref,suff,ans;
}segtree[1<<17];
const int base=1<<16;
data combine (data l, data r) {
        data res;
        res.sum = l.sum + r.sum;
        res.pref = max (l.pref, l.sum + r.pref);
        res.suff = max (r.suff, r.sum + l.suff);
        res.ans = max (max (l.ans, r.ans), l.suff + r.pref);
        return res;
}
data make_data (int val) {
        data res;
        res.sum = val;
        res.pref = res.suff = res.ans = max(-1000000, val);
        return res;
}
data query(int node, int l, int r, int L, int R)
{

  if((l==L)&&(r==R))return segtree[node];
  int M=(L+R)>>1;
  if(r<=M)return query(node<<1,l,r,L,M);
  else if(l>M)return query((node<<1)|1,l,r,M+1,R);
  else return combine(query(node<<1,l,M,L,M),query((node<<1)|1,M+1,r,M+1,R));

}
void update(int pos,int x)
{
  segtree[base+pos].sum=segtree[base+pos].pref=segtree[base+pos].suff=segtree[base+pos].ans=x;
  for(int i=(base+pos)>>1;i;i>>=1)
    segtree[i] = combine(segtree[i<<1], segtree[(i<<1)|1]);
}
int main()
{
    int A[MAX];
    int N;
    scanf("%d",&N);
    for(int i =0; i<N; i++) {scanf("%d",&A[i]); segtree[base+i]=make_data(A[i]);}
    for(int i= base-1;i;i--)
    {
        segtree[i]=combine(segtree[i<<1],segtree[(i<<1)|1]);
    }
    int Q;
    int c,dx,dy;
    scanf("%d",&Q);
    while(Q--)
    {
        scanf("%d %d %d",&c,&dx,&dy); dx--;dy--;
        if(c==0) {
            dy++;
            update(dx,dy);

        }
        else{
        int answer = query(1,dx,dy,0,base-1).ans;
        printf("%d\n",answer);
        }
    }
    return 0;
}

