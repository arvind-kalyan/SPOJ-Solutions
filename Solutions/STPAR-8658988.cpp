/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    stack<int> te1;
    int n,i,j,k;
    scanf("%d",&n);
    while(n!=0)
    {    int a[n];
        for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
        int temp=1;
        i=1;
        while(i<=n)
        {
            if(te1.empty()==1 && a[i]==temp)
            {
                i++;
                temp++;
                
            }
            else if(te1.empty()==1 && a[i]!=temp)
            {
                te1.push(a[i]);
                i++;
                
            }
            else if(te1.empty()==0 && a[i]==temp)
            {
                i++;
                temp++;
                
            }
            else if(te1.empty()==0 && te1.top()==temp)
            {
                temp++;
                te1.pop();
                
            }
            else if(te1.empty()==0 && a[i]!=temp && te1.top()!=temp)
            {
                te1.push(a[i]);
                i++;
                
            }
        }
        int f1=0;
        while(f1==0)
        {
            if(te1.empty()==0 && te1.top()==temp)
            {
                te1.pop();
                temp++;
            }
            else if(te1.empty()==0 && te1.top()!=temp)
            f1=1;
            else if(te1.empty()==1)
            f1=2;
        }
      
        if(f1==1)
        printf("no\n");
        else if(f1==2)
        printf("yes\n");
        while(te1.empty()==0)
        te1.pop();
        scanf("%d",&n);
        }
    return 0;
    }



