#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int a,b,c;
    while(sf("%lld %lld %lld",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
            break;
        if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
            pf("right\n");
        else
            pf("wrong\n");
    }
    return 0;
}
