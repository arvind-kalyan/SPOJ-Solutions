#include<stdio.h>
int main()
{   int tmp,i,j;
    int x=0;
    int t,friends;
    long int stamps;
    scanf("%d",&t);
   start: while(t--)
    {
	x++;
	long int sum=0;int c=0;long int check=0;
        scanf("%d %d",&stamps,&friends);
        int a[friends];
        for(i=0;i<friends;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<friends;i++)
        {
            check+=a[i];
        }
   if(check < stamps){printf("Scenario #%d:\nimpossible",x);printf("\n\n");goto start;}

   for (i = 0 ; i < ( friends - 1 ); i++)
  {
    for (j = 0 ; j < friends- i-1; j++)
    {
      if (a[j] < a[j+1])
      {
        tmp = a[j];
        a[j]   = a[j+1];
        a[j+1] = tmp;
      }
    }
  }

      for(i=0;i<friends;i++)
      {
          sum+=a[i];
          if(sum<stamps){c++;}
            if(sum>=stamps){break;}
              }
    printf("Scenario #%d:\n%d",x,c+1);
    if(t!=0){printf("\n\n");}
	  }
    return 0;
}

