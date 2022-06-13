#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int a,b,c;
    while(sf("%d %d %d",&a,&b,&c))
    {
        if(a==0 && b==0 && c==0)
            break;
        int result;
        if(c==1)
            result=(((a-7)*(b-7))+1)/2;
        else
            result=((a-7)*(b-7))/2;
        pf("%d\n",result);
    }
    return 0;
}
