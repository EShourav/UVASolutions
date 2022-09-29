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
        if(n==1)
        {
            int lel;
            sf("%d",&lel);
            pf("Case %d: 0 0\n",ca);
        }
        else
        {
            int arr[n];
            sf("%d",&arr[0]);
            int low_jump=0;
            int high_jump=0;
            for(int i=1; i<n; i++)
            {
                sf("%d",&arr[i]);
                if(arr[i-1]<arr[i])
                    high_jump++;
                else if(arr[i-1]>arr[i])
                    low_jump++;
            }
            pf("Case %d: %d %d\n",ca,high_jump, low_jump);
        }
    }
    return 0;
}
