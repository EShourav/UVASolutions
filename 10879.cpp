#include<bits/stdc++.h>

#define pf printf
#define sf scanf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        int n;
        sf("%d",&n);
        int count = 0;
        pf("Case #%d: %d",ca,n);
        for(int i=2; count<2; i++)
        {
            if(n%i==0)
            {
                pf(" = %d * %d",i,n/i);
                count++;
            }
        }
        cout<<endl;
    }
    return 0;
}
