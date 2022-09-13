#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    double a,b,c;
    while(sf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        if(a<=0 || b<=0 || c<=0)
            pf("-1.000\n");
        else if(a+b>c && b+c>a && c+a>b)
        {
            double s = (a+b+c)/2;
            double temp = sqrt(s*(s-a)*(s-b)*(s-c));
            double area = (4*temp)/3;
            pf("%.3lf\n",area);
        }
        else
            pf("-1.000\n");
    }
    return 0;
}
