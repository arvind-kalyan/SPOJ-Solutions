#include<bits/stdc++.h>
using namespace std;
int t;
unsigned long long n;

int sumd(unsigned long long x)
{
 int sum = 0;
 while(x > 0)
 {
     sum += x % 10;
     x = x / 10;
 }
 return sum;
}


int main()
{    
    ios::sync_with_stdio(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        while(1)
        {
            if(n % sumd(n) == 0)
                { cout<<n<<"\n"; break; }
            n++;
        }
    }
    return 0;
}
