#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        double c,d;
        sf("%lf %lf",&c,&d);
        double f = 9*c/5+d;
        double ans = f*5/9;
        pf("Case %d: %.2lf\n",ca,ans);
    }
    return 0;
}
