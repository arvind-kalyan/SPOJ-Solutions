#include<stdio.h>
#include<string.h>
#include<stack>
#include<vector>
#include<iostream>
using namespace std;

vector<int> g[100005];
int a[100005];

void dfs(int k)
{
    int count=0,x,i;
    stack<int> s;
    s.push(k);
    while(!s.empty())
    {
      x=s.top();
      s.pop();
      if(a[x]==0)
      {
          count++;
          a[x]=1;
          for(i=0;i<g[x].size();i++)
          {
              s.push(g[x][i]);
          }
      }
    }
}


int main()
{
    int t,i,j,n,ans,x,y,m,count;

    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<100005;i++){g[i].clear();}
        memset(a,0,sizeof(a));
        scanf("%d",&n);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            g[x].push_back(y);
            g[y].push_back(x);
        }
        ans=0;
        for(i=0;i<n;i++)
        {
           if(a[i]==0)
           {
               ans++;
               dfs(i);
           }
        }

        printf("%d\n",ans);
    }
    return 0;
}

