#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n) && n!=0)
    {
        if(n<=100)
            pf("f91(%d) = 91\n",n);
        else
            pf("f91(%d) = %d\n",n,n-10);
    }
    return 0;
}
