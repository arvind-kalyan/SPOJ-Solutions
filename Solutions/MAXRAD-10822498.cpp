#include<bits/stdc++.h>
using namespace std;

double dist(double x1,double x2,double y1,double y2)
{
    double dist;
    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;

}

double min1(double a,double b)
{
    if(a<b){return a;}
    else {return b;}
}

double max1(double a,double b)
{
    if(a>b){return a;}
    else {return b;}
}

int main()
{
    int t,n,i,j;
    double x[2000],y[2000],r,dist1,mind,maxr;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
          scanf("%lf %lf",&x[i],&y[i]);

        }
        maxr=0.0;
        for(i=0;i<n;i++)
        {
            mind=9999999.0;
            for(j=0;j<n;j++)
            {
              if(i!=j)
              {
                dist1=dist(x[i],x[j],y[i],y[j]);
                mind=min1(dist1,mind);
              }
            }
            maxr=max1(maxr,mind);
        }
        r=maxr-1.00;
        if(mind<2)
        {
            printf("%0.6lf\n",-1.0);
        }
        else
        {
           printf("%0.6lf\n",r);
        }

    }
    return 0;
}

