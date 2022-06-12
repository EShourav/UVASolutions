#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {
        int res=n+(n/2);
        pf("%d\n",res);
    }
    return 0;
}
