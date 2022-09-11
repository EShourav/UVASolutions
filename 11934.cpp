#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int a,b,c,d,l;
    while(sf("%d %d %d %d %d",&a,&b,&c,&d,&l))
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
        long long int sum=0;
        int counter=0;
        for(int i=0; i<=l; i++)
        {
            sum=a*i*i + b*i + c;
            if(sum%d==0)
                counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}
