#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d", &t);
    while(t--)
    {
        long long int a,b;
        sf("%lld %lld",&a,&b);
        if(a==b)
            pf("=\n");
        else if(a>b)
            pf(">\n");
        else
            pf("<\n");
    }
    return 0;
}
