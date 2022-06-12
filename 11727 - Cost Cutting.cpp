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
        int arr[3];
        for(int i=0; i<3; i++)
            sf("%d",&arr[i]);
        sort(arr,arr+3);
        pf("Case %d: %d\n",ca,arr[1]);
    }
    return 0;
}
