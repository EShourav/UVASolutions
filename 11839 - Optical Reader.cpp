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
        for(int i=0; i<n; i++)
        {
            int arr[5];
            int lcounter = 0;
            int hcounter = 0;
            int pos_b = 0;
            int pos_w = 0;
            int mini = 300;
            int maxi = -300;
            string res = "ABCDE";
            for(int j=0; j<5; j++)
            {
                sf("%d",&arr[j]);
                if(arr[j]<=127)
                {
                    lcounter++;
                    if(arr[j]<mini)
                    {
                        mini = arr[j];
                        pos_b = j;
                    }
                }
                else
                {
                    hcounter++;
                    if(arr[j]>maxi)
                    {
                        maxi = arr[j];
                        pos_w = j;
                    }
                }
            }
            if(lcounter==1 && hcounter>1)
                cout<<res[pos_b]<<endl;
            else
                cout<<"*"<<endl;
        }
    }
    return 0;
}
