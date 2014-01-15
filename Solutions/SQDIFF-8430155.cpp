#include<stdio.h>
int main(){ int t,x1,y1,x2,y2,r1,r2;double area;scanf("%d",&t);while(t--){scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);area=3.1415926535897932384626433*((r1*r1)-(r2*r2));if(area<0){area=area*-1;}printf("%0.2lf\n",area);}return 0;}




