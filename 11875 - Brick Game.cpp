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
        int arr[n];
        for(int i=0; i<n; i++)
            sf("%d",&arr[i]);
        sort(arr, arr+n);
        pf("Case %d: %d\n",ca, arr[n/2]);
    }
    return 0;
}
