#include<stdio.h>
#include<string.h>

long long a[1000090];
int b[1000090];

int main()
{
    int n,count=0,sign;
    scanf("%d",&n);
    int ans,i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i>0)
        {
            if(a[i]>a[i-1]){b[i]=1;}
            if(a[i-1]==a[i]){b[i]=-1;}
            if(a[i-1]>a[i]){b[i]=0;}
        }

    }
    int lastSeen = -1;


    for(i=1;i<n;i++){

        if((lastSeen==0 and b[i]==1) or (lastSeen==1 and b[i]==0) or (lastSeen==-1 and (b[i]==0 or b[i]==1))){

            {
            count++;
            }

            lastSeen=b[i];
        }
    }
    printf("%d\n",count+1);
    return 0;
}

