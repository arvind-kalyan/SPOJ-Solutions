/*
	Author - Arvind K
	College - BITS Pilani
*/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
char s[100005];
    int len,i,j,l;
    char c;
    int key,t,x;
inline void superFastRead (int *a)
{
    char c = 0;
    while(c<33)
    c = fgetc(stdin);
    *a = 0;
    while(c>33)
    {
               *a = *a*10 + c - '0';
               c = fgetc(stdin);
    }
}
int main()
{

    superFastRead(&t);
    while(t--)
    {
        superFastRead(&key);
        scanf("%s",&s);
        len=strlen(s);
        for(i=0;i<len;i++)
        {
            if(s[i]=='.'){s[i]=' ';}
            else
            {
              if(isupper(s[i]))
              {
               x=((int)(s[i]-'A')+key)%26;

               s[i]=(char)(65+x);
               if(key>=26)
               {
                 s[i]=tolower(s[i]);
               }
               }
              else
              {
              x=((int)(s[i]-'a')+key)%26;

               s[i]=(char)(97+x);
               if(key>=26)
               {
                 s[i]=toupper(s[i]);
               }
            }

            }

        }
       printf("%s\n",s);

    }
    return 0;

}

