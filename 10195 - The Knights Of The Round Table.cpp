#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    double a,b,c;
    while(sf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a==0 || b==0 || c==0)
            pf("The radius of the round table is: 0.000\n");
        else
        {
            double s=(a+b+c)/2;
            double r=sqrt(((s-a)*(s-b)*(s-c))/s);
            pf("The radius of the round table is: %.3lf\n",r);
        }
    }
    return 0;
}
