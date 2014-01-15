#include<iostream>
#include<stdio.h>
void isort(int y[],int n)
{  int i,temp,j;
    for(i=1; i<n; i++)
	{
		temp = y[i];
		j = i-1;
		while(temp<y[j] && j>=0)
		{
			y[j+1] = y[j];
			j = j-1;
		}
		y[j+1] = temp;
}
}
int main()
{
    int a,d,i,j;
    begin:scanf("%d %d",&a,&d);
    while(a!=0 && d!=0)
    {
        int x[a],y[d];
        for(i=0;i<a;i++)
        {
            scanf("%d",&x[i]);
        }
        for(j=0;j<d;j++)
        {
            scanf("%d",&y[j]);
        }
        isort(y,d);
        int smallest=x[0];
        for(i=1;i<a;i++)
        {   if(x[i]<smallest)
            {
                smallest=x[i];
            }
        }
      if(smallest>y[1]){printf("N\n");goto begin;}
      else if(smallest==y[1] || (smallest==y[0] && smallest==y[1])){printf("N\n");goto begin;}
      else {printf("Y\n");goto begin;}
    }
    if(a==0 && d==0){return 0;}
    return 0;
}


