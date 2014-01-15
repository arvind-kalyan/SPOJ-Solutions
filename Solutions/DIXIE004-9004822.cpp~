#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
bool twodig(int x)
{
    int t=x;
    t=t/10;
    if(t==0) return false;
    else return true;
}

int sumoftwodigs(int y)
{
    int te=y;
    int sam=0;
    sam=te%10;
    te/=10;
    sam+=te;
    return sam;

}
using namespace std;
int main()
{   int num[19];
    char s[18];
    while(gets(s))
    {   int e=0,o=0;
        for(int i=0;i<16;i++)
            num[i]=s[i]-'0';

        for(int i=0;i<16;i++)
        {
            if(i%2==0)
                {   int temp=2*num[i];
                  if(twodig(temp))
                  {
                        e+=sumoftwodigs(temp);
                  }
                  else e+=temp; }
            else
                o+=num[i];
        }

        int x=e+o;
        if(x%10==0) printf("%s,TRUE\n",s);
        else printf("%s,FALSE\n",s);
    }
    return 0;
}

