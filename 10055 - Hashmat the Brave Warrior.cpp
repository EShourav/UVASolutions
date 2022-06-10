#include<bits/stdc++.h>

#define pf printf
#define sf scanf
#define lli long long int
using namespace std;
int main()
{
    lli a,b;
    while(sf("%lld %lld",&a,&b)!=EOF)
    {
        lli dif=abs(a-b);
        pf("%lld\n",dif);
    }
    return 0;
}
