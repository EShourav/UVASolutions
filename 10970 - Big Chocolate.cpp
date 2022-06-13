#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int m,n;
    while(sf("%d %d",&m,&n)!=EOF)
        pf("%d\n",m*n-1);
    return 0;
}
