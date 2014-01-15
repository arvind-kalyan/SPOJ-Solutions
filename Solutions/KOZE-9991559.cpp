/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<iostream>
#include<queue>

#include<cstdio>
#include<cstring>
using namespace std;

int n,m,sumv,sumk;

char s[300][300];
int exp[300][300];

typedef struct pos
{
    int x;
    int y;
}pos;


void search(pos p)
{
    queue< pos > q;
    pos t;
    int flag=0;
    q.push(p);
    int cntk,cntv;
    cntk=0;
    cntv=0;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        if(exp[t.x][t.y]==0)
        {


        exp[t.x][t.y]=1;
        if(s[t.x][t.y]=='k'){cntk++;}
        if(s[t.x][t.y]=='v'){cntv++;}
        if((t.x==n-1)||(t.x==0)||(t.y==0)||(t.y==m-1)){flag=1;}
        if((s[t.x+1][t.y]!='#')&&(t.x<n-1)){q.push((pos){t.x+1,t.y});}
        if((s[t.x-1][t.y]!='#')&&(t.x>0)){q.push((pos){t.x-1,t.y});}
        if((s[t.x][t.y+1]!='#')&&(t.y<m-1)){q.push((pos){t.x,t.y+1});}
        if((s[t.x][t.y-1]!='#')&&(t.y>0)){q.push((pos){t.x,t.y-1});}
        }
    }
    if(flag==0)
    {
      if(cntk>cntv){sumk+=cntk;}
    else {sumv+=cntv;}
    }
    else
    {
        sumk+=cntk;
        sumv+=cntv;
    }

}

int main()
{
    int i,j;
    pos p1;
    sumv=0;
    sumk=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
    }
    memset(exp,0,sizeof(exp));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          if((exp[i][j]==0)&&(s[i][j]!='#'))
          {

                p1.x=i;
                p1.y=j;
              search(p1);
          }
        }
    }
    printf("%d %d\n",sumk,sumv);
    return 0;
}

