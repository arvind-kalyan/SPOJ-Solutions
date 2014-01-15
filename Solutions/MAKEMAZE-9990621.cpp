#include<stdio.h>
#include<string.h>
#include<queue>
using namespace std;

int m,n,a[30][30];
char s[30][30];
int exp[30][30];

typedef struct pos
{
    int x,y;

}pos;

int explore(pos p)
{
    queue< pos > q;
    pos t;
    int stx=-1,sty=-1;
    int count=0;
    q.push(p);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        if(exp[t.x][t.y]==0)
        {


        exp[t.x][t.y]=1;
        if((t.x==n-1)||(t.x==0)||(t.y==0)||(t.y==m-1))
        {
            count++;
        }
        if((s[t.x+1][t.y]!='#')&&(t.x<n-1)){q.push((pos){t.x+1,t.y});}
        if((s[t.x-1][t.y]!='#')&&(t.x>0)){q.push((pos){t.x-1,t.y});}
        if((s[t.x][t.y+1]!='#')&&(t.y<m-1)){q.push((pos){t.x,t.y+1});}
        if((s[t.x][t.y-1]!='#')&&(t.y>0)){q.push((pos){t.x,t.y-1});}
        }
    }
    return count;
}

int main()
{
    int t,i,j;
    int flag=0;
    pos p1;
    int count0,count2,count3,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        memset(exp,0,sizeof(exp));
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            scanf("%s",&s[i]);
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='.'){a[i][j]=1;}
                else {a[i][j]=0;}
            }
        }
        count0=count2=count3=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((exp[i][j]==0)&&(a[i][j]==1))
                {
                    p1.x=i;
                    p1.y=j;
                    ans=explore(p1);
                    if(ans==2)
                    {
                       count2++;
                    }
                    if((ans!=0)&&(ans!=2))
                    {
                       count3++;
                    }

                }
            }
        }
        if((count3>0)||(count2!=1)){printf("invalid\n");}
        else {printf("valid\n");}
    }
    return 0;
}


