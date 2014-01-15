#include<cstdio>
#include<cstring>

#define gc getchar_unlocked

int lazy[270000],tree[270000];

inline int gi(){
	register int x = 0, c = gc();
	while(c<48 || c>57) c = gc();
	while(c>=48 && c<=57)	
		x = (x<<1) + (x<<3) + c - 48,
		c = gc();
	return x;
}

inline void init(){
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));
}

inline void propagate(int nod,int st, int en){
	int x = nod<<1, y = x+1;
	tree[nod] += lazy[nod];
	if(st<en){
		lazy[x] += lazy[nod];
		lazy[y] += lazy[nod];
	}
	lazy[nod] = 0;
}

inline void update(int nod, int st, int en, int u, int v, int val){
	propagate(nod,st,en);
	if(v<st || u>en) return;
	if(u<=st && en<=v){
		lazy[nod]+=val;
		return;
	}
	update(nod<<1,st,(st+en)/2,u,v,val);
	update(1+(nod<<1),1+((st+en)>>1),en,u,v,val);
	tree[nod] = tree[nod<<1] + tree[1+(nod<<1)];
}

inline int query(int nod, int st, int en, int v){
	propagate(nod,st,en);
	if(st==v && en==v) return tree[nod];
	if(v<st || v>en) return 0;
	return query(nod<<1,st,(st+en)>>1,v) + query(1+(nod<<1),1+((st+en)>>1),en,v);
}

int main(){
	int t,n,u,q,i,j,k;
	for(t=gi();t--;){
		init();
		n = gi();
		u = gi();
		while(u--){
			i = gi();
			j = gi();
			k = gi();
			update(1,1,n,i+1,j+1,k);
		}
		for(q = gi();q--;){
			i = gi();
			printf("%d\n",query(1,1,n,i+1));
		}
	}
	return 0;
}

