#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define lli long long int
using namespace std;
int main()
{
    lli t;
    sf("%lld",&t);
    while(t--)
    {
        lli s,d;
        sf("%lld %lld",&s,&d);
        if(d>s)
            pf("impossible\n");
        else
        {
            if((s+d)%2==1)
                pf("impossible\n");
            else
            {
                lli a=(s+d)/2;
                lli b=s-a;
                pf("%lld %lld\n",a,b);
            }
        }
    }
    return 0;
}
