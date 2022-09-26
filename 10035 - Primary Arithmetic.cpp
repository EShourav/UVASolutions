#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int a;
    long long int b;
    while(sf("%lld %lld",&a,&b))
    {
        if(a==0 && b==0)
            break;
        int counter = 0;
        int carry = 0;
        while (a || b)
        {
            int rem1 = a%10;
            int rem2 = b%10;
            if(rem1 + rem2 + carry > 9)
            {
                carry = 1;
                counter++;
            }
            else
                carry = 0;
            a/=10;
            b/=10;
        }
        if(counter == 0)
            pf("No carry operation.\n");
        else if(counter==1)
            pf("1 carry operation.\n");
        else
            pf("%d carry operations.\n",counter);
    }
    return 0;
}
