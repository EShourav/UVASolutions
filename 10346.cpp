#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n,k;
    while(sf("%d %d",&n,&k)!=EOF)
    {
        int res = n+(n-1)/(k-1);
        cout<<res<<endl;
    }
    return 0;
}
