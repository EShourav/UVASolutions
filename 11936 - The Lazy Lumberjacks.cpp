#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    while(t--)
    {
        long long int a,b,c;
        sf("%lld %lld %lld", &a,&b,&c);
        if(a+b>c && b+c>a && c+a>b)
            pf("OK\n");
        else
            pf("Wrong!!\n");
    }
    return 0;
}
