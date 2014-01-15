#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 200003

// ( w (u, v) ) format
vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], total, N, E;

int findset(int x, int *parent)
{
    if(x != parent[x])
        parent[x] = findset(parent[x], parent);
    return parent[x];
}

void kruskal()
{
    int i, pu, pv;
    sort(GRAPH.begin(), GRAPH.end());
    for(i=total=0; i<E; i++)
    {
        pu = findset(GRAPH[i].second.first, parent);
        pv = findset(GRAPH[i].second.second, parent);
        if(pu != pv)
        {
            MST.push_back(GRAPH[i]); // add to tree
            total += GRAPH[i].first; // add edge cost
            parent[pu] = parent[pv]; // link
        }
    }
}

void reset()
{
    
    for(int i=1; i<=N; i++) parent[i] = i;
}

void print()
{
    int i, sz;
    
    sz = MST.size();

    printf("Minimum cost: %d\n", total);
}

int main()
{
    int i, u, v, w,sum;
    N=1;
    while((N!=0)||(E!=0))
    {

    scanf("%d %d", &N, &E);
    if((N==0)&&(E==0)){break;}
    reset();
    sum=0;
    GRAPH.clear();
    for(i=0; i<E; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        GRAPH.push_back(pair< int, edge >(w, edge(u, v)));
        sum+=w;
    }
    kruskal(); //  MST vector
    printf("%d\n",sum-total);
    }
    return 0;
}


