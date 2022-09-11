#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(sf("%d",&n))
    {
        if(n==0)
            break;
        int counter=0;
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0)
                counter+=i;
        }
        if(counter<n)
            pf("%5d  DEFICIENT\n",n);
        else if(counter>n)
            pf("%5d  ABUNDANT\n",n);
        else
            pf("%5d  PERFECT\n",n);
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
