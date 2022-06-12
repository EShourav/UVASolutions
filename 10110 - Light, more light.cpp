#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int n;
    while(sf("%lld",&n))
    {
        if(n==0)
            break;
        long long int a=sqrt(n);
        if(a*a==n)
            pf("yes\n");
        else
            pf("no\n");
    }
    return 0;
}
