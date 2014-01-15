/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<stdio.h>
#include<cstring>
int main(){
    char n[110];
    int cntr1=0,cntr2=0,cntr3=0;
    scanf("%s",&n);
    int temp=strlen(n);
    for(int i=0;i<temp;i++)
    {
            if(n[i]=='0')
            {
                         cntr3++;
                         if(i==temp-1){ if(n[0]=='0')cntr1++;
                         if(n[0]=='1') cntr2++;continue;}
                         if(n[i+1]=='0')cntr1++;
                         else if(n[i+1]=='1')cntr2++;
                         
            }        
    }
    if(cntr3==temp){printf("EQUAL");return 0;}
    if(cntr1>cntr2){printf("SHOOT");return 0;}
    if(cntr1==cntr2){printf("EQUAL");return 0;}
    else printf("ROTATE");
    return 0;    
}

