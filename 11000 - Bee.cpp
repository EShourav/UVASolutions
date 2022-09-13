#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define lli long long int
using namespace std;
int main()
{
    lli n;
    while(sf("%lld",&n))
    {
        if(n==-1)
            break;
        lli male = 1;
        lli total = 2;
        lli a = 1;
        lli b = 1;
        if(n==0)
            pf("0 1\n");
        else if(n==1)
            pf("1 2\n");
        else
        {
            for(lli i=2; i<=n; i++)
            {
                lli temp = a;
                a = b;
                b = temp+a;
                total+=b;
                male = total-b;
            }
            pf("%lld %lld\n",male, total);
        }
    }
    return 0;
}
