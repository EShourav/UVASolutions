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
        int a,b;
        sf("%d %d",&a,&b);
        if(b%a)
            pf("-1\n");
        else
            pf("%d %d\n",a,b);
    }
    return 0;
}
