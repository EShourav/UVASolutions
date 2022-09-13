#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define lli long long int
using namespace std;
int main()
{
    lli n;
    while(sf("%lld",&n)!=EOF)
    {
        if(n<0 && n%2==0)
            pf("Underflow!\n");
        else if(n<0 && n%2!=0)
            pf("Overflow!\n");
        else if(n>=0 && n<8)
            pf("Underflow!\n");
        else if(n>13)
            pf("Overflow!\n");
        else
        {
            lli fact = 1;
            for(lli i=1; i<=n; i++)
                fact*=i;
            cout<<fact<<endl;
        }
    }
    return 0;
}
