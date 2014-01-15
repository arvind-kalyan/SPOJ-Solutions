#include <cstdio>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

#define edge pair< int, int >
#define MAX 200003


vector< pair<int, edge > > GRAPH, MST;
int parent[MAX], total, N, E;

int findset(int x, int *parent)
{
    if(x != parent[x])
        parent[x] = findset(parent[x], parent);
    return parent[x];
}

int pow2(long long w)
{
    long long ans=1;
    int i=0;
    while(ans<w)
    {
        ans*=2;
        i++;
    }
    return i;
}

void kruskal()
{
    int i, pu, pv;
    sort(GRAPH.begin(), GRAPH.end());
    total=0;
    for(i=total=0; i<E; i++)
    {
        pu = findset(GRAPH[i].second.first, parent);
        pv = findset(GRAPH[i].second.second, parent);
        if(pu != pv)
        {
            MST.push_back(GRAPH[i]);
            total += GRAPH[i].first;
            parent[pu] = parent[pv];
        }
    }
}

void reset()
{

    for(int i=1; i<=N; i++) parent[i] = i;
}



int main()
{
    int i, u, v, ap;
    long long w;
    int t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d %d", &N, &E);

    reset();
    GRAPH.clear();
    MST.clear();
    for(i=0; i<E; i++)
    {
        scanf("%d %d %lld", &u, &v, &w);
        ap=pow2(w);

        GRAPH.push_back(pair< int, edge >(ap, edge(u, v)));
    }
    kruskal();
    printf("%d\n",total+1);
    }

    return 0;
}

