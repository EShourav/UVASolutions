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
        long long int a,b,c;
        sf("%lld %lld %lld",&a,&b,&c);
        if(a<=0 || b<=0 || c<=0)
            pf("Case %d: Invalid\n",ca);
        else
        {
            if((a+b>c) && (b+c>a) && (c+a)>b)
            {
                if(a==b && b==c)
                    pf("Case %d: Equilateral\n",ca);
                else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
                    pf("Case %d: Isosceles\n",ca);
                else
                    pf("Case %d: Scalene\n",ca);
            }
            else
                pf("Case %d: Invalid\n",ca);
        }
    }
    return 0;
}
