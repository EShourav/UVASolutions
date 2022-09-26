#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n) && n!=0)
    {
        int arr[n];
        for(int i=0; i<n; i++)
            sf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0; i<n-1; i++)
            pf("%d ",arr[i]);
        cout<<arr[n-1]<<endl;
    }
    return 0;
}
