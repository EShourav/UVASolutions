#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int n;
    while(sf("%lld",&n))
    {
        if(n<0)
            break;
        long long int res=(n*(n+1))/2;
        pf("%lld\n",res+1);
    }
    return 0;
}
