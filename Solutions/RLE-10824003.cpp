/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100002],c;
    int i,n,cnt,ans;
    string s1;
    while(scanf("%s",&s)==1)
    {
        n=strlen(s);
        s1="";
        cnt=1;
        c=s[0];
        for(i=0;i<n;i++)
        {
            c=s[i];
            //cout<<cnt<<" ";
            if(s[i]==s[i+1] && i<n-1)
            {
                cnt++;

            }
            else
            {
                if(cnt>3)
                {
                    if(cnt/100000>0){s1+=(char)(((int)'0')+cnt/100000);cnt=cnt%100000;}
                    if(cnt/10000>0){s1+=(char)(((int)'0')+cnt/10000);cnt=cnt%10000;}
                    if(cnt/1000>0){s1+=(char)(((int)'0')+cnt/1000);cnt=cnt%1000;}
                    if(cnt/100>0){s1+=(char)(((int)'0')+cnt/100);cnt=cnt%100;}
                    if(cnt/10>0){s1+=(char)(((int)'0')+cnt/10);cnt=cnt%10;}
                    s1+=(char)(((int)'0')+cnt);
                    s1+='!';
                    s1+=c;
                    cnt=1;
                    continue;

                }
                if(cnt==1)
                {
                    s1+=c;
                }
                if(cnt==2)
                {
                    s1+=c;s1+=c;cnt=1;
                }
                if(cnt==3)
                {
                   s1+=c;s1+=c;s1+=c;cnt=1;
                }

            }
        }
        cout<<s1<<"\n";

    }
    return 0;
}




