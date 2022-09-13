#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int ca = 1;
    int n;
    while(sf("%d",&n))
    {
        if(n==0)
            break;
        double v,u,t,s,a;
        if(n==1)
        {
            sf("%lf %lf %lf",&u,&v,&t);
            a = (v-u)/t;
            s = ((u+v)/2)*t;
            pf("Case %d: %.3lf %.3lf\n",ca,s,a);
        }
        else if(n==2)
        {
            sf("%lf %lf %lf",&u,&v,&a);
            t = (v-u)/a;
            s = ((u+v)/2)*t;
            pf("Case %d: %.3lf %.3lf\n",ca,s,t);
        }
        else if(n==3)
        {
            sf("%lf %lf %lf",&u,&a,&s);
            v = sqrt(u*u+2*a*s);
            t = (v-u)/a;
            pf("Case %d: %.3lf %.3lf\n",ca,v,t);
        }
        else if(n==4)
        {
            sf("%lf %lf %lf",&v,&a,&s);
            u = sqrt(v*v-2*a*s);
            t = (v-u)/a;
            pf("Case %d: %.3lf %.3lf\n",ca,u,t);
        }
        ca++;
    }
    return 0;
}
