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
        int n;
        sf("%d",&n);
        int arr[n+5];
        int maxs=0;
        for(int i=0; i<n; i++)
        {
            sf("%d",&arr[i]);
            if(arr[i]>=maxs)
                maxs=arr[i];
        }
        pf("Case %d: %d\n",ca,maxs);
    }
    return 0;
}
