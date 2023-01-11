#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int sorter(int arr[], int n)
{
    int counter=0;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    int n;
    while(sf("%d",&n)!=EOF)
    {
        int arr[n];
        for(int i=0; i<n; i++)
            sf("%d",&arr[i]);
        int result = sorter(arr, n);
        pf("Minimum exchange operations : %d\n",result);
    }
    return 0;
}
