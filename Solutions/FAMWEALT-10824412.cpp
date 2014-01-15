/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;


int fun(int x,int w)
{
    if(x<=1)
    {
        return w;
    }
    if(x%4==0)
    {
        return fun(x/2,w*2);
    }
    if(x%4==1)
    {
        return fun((x-1)/2,w*2);
    }
    if(x%4==2)
    {
        return fun(x/2,w*2);
    }
    if(x%4==3)
    {
        return fun((x-1)/2,w*4);
    }
}

double fun2(int x,double w)
{
    //cout<<w<<" ";
    if(x<=1)
    {
        return w;
    }
    if(x%4==0)
    {
        return fun2(x/2,(w/2.0));
    }
    if(x%4==1)
    {
        return fun2((x-1)/2,(w/2.0));
    }
    if(x%4==2)
    {
        return fun2(x/2,(w/2.0));
    }
    if(x%4==3)
    {
        return fun2((x-1)/2,(w/4.0));
    }

}


int main()
{
    int t,x,y,w,ini;
    double ans,p;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>w;
        ini=fun(x,w);
        p=(double)ini;
        ans=fun2(y,p);
        //cout<<ans<<" "<<p<<" "<<ini<<" ";
        printf("%0.6lf\n",ans);
    }
    return 0;
}






