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
        int a,b;
        sf("%d %d",&a,&b);
        int sum=0;
        for(int i=a; i<=b; i++)
            if(i%2!=0)
                sum+=i;
        pf("Case %d: %d\n",ca, sum);
    }
    return 0;
}
