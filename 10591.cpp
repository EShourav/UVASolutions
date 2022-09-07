#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    long long int t;
    sf("%lld",&t);
    for(long long int ca=1; ca<=t; ca++)
    {
        long long int n, temp;
        sf("%lld",&n);
        long long int sum=0;
        temp = n;
        int a;
        while(temp<9 || temp>9)
        {
            if(temp<=9)
            {
                sum=temp;
                break;
            }
            while(temp!=0)
            {
                a=temp%10;
                sum+=a*a;
                temp/=10;
            }
            temp=sum;
            sum=0;
        }

        if(sum==1 || sum==7)
            pf("Case #%lld: %lld is a Happy number.\n",ca,n);
        else
            pf("Case #%lld: %lld is an Unhappy number.\n",ca,n);

    }
    return 0;
}
