#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test,t,nn,n,i;
       char text[100005],pattern1[100005];
       int j,k;
       scanf("%d",&test);
	   int a[100009];
       while(test--)
       {
               cin>>nn;
               for(i=0;i<nn;i++)
               scanf("%d",&a[i]);
               for(i=1;i<nn;i++)
               {
                       if(a[i]>a[i-1])
                       text[i-1]='G';
                       else if(a[i]<a[i-1])
                       text[i-1]='L';
                       else
                       text[i-1]='E';
               }
               text[i-1]='\0';

gets(pattern1);
gets(pattern1);
 
n=strlen(pattern1);
int array[100009];
array[0]=-1;
k=-1;
for(i=0;i<n;i++)
{
while(k>-1 && pattern1[k]!=pattern1[i])
k=array[k];
k++;
array[i+1]=k;

}
k=0;

int p=0;
int m=strlen(text);
p=0;
for(t=0;t<m;t++)
{
	while(p>-1 && pattern1[p]!=text[t])
		p=array[p];
	if(++p==n)
	{        
		printf("YES\n");break;
		p=array[p];
	}
 
}
if(t==m)
printf("NO\n");
 
 
}
 
return 0;
}

