/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include <list>
#include<stdio.h>
#define NIL -1
using namespace std;


class Graph
{
    int V;
    list<int> *adj;
    void APUtil(int v, bool visited[], int disc[], int low[],
                int parent[], bool ap[]);
public:
    Graph(int V);
    void addEdge(int v, int w);
    int AP();
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}


void Graph::APUtil(int u, bool visited[], int disc[],
                                      int low[], int parent[], bool ap[])
{

    static int time = 0;


    int children = 0;


    visited[u] = true;


    disc[u] = low[u] = ++time;


    list<int>::iterator i;
    for (i = adj[u].begin(); i != adj[u].end(); ++i)
    {
        int v = *i;  // v is current adjacent of u


        if (!visited[v])
        {
            children++;
            parent[v] = u;
            APUtil(v, visited, disc, low, parent, ap);


            low[u]  = min(low[u], low[v]);


            if (parent[u] == NIL && children > 1)
               ap[u] = true;


            if (parent[u] != NIL && low[v] >= disc[u])
               ap[u] = true;
        }


        else if (v != parent[u])
            low[u]  = min(low[u], disc[v]);
    }
}


int Graph::AP()
{

    bool *visited = new bool[V];
    int *disc = new int[V];
    int *low = new int[V];
    int *parent = new int[V];
    bool *ap = new bool[V];
    int sum=0;

    for (int i = 0; i < V; i++)
    {
        parent[i] = NIL;
        visited[i] = false;
        ap[i] = false;
    }


    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            APUtil(i, visited, disc, low, parent, ap);


    for (int i = 0; i < V; i++)
        if (ap[i] == true)
            sum++;

return sum;
}

int main()
{
    int n,m,i,j,x,y,ans;
    while((n!=0)&&(m!=0))
    {
        Graph g1(10003);
        scanf("%d %d",&n,&m);
        ans=0;
        if((n==0)&&(m==0))
        {
            break;
        }


        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            x--;
            y--;
            g1.addEdge(x,y);

        }
        printf("%d\n",g1.AP());
    }


    return 0;
}

