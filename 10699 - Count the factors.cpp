#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int n;
    while(sf("%d",&n) && n!=0)
    {
        int temp = n;
        int counter = 0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
                counter++;
            while(n%i==0)
                n/=i;
        }
        if(n!=1)
            counter++;
        pf("%d : %d\n",temp,counter);
    }
    return 0;
}
