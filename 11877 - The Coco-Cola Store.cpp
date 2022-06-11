#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n))
    {
        if(n==0)
            break;
        pf("%d\n",n/2);
    }
    return 0;
}
