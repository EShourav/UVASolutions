#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int square[100010];
void isSquare()
{
    int lim=sqrt(100010);
    for(int i=1; i<=lim; i++)
    {
        square[i*i]=1;
    }
}
int main()
{
    isSquare();
    int a,b;
    while(sf("%d %d",&a,&b))
    {
        if(a==0 && b==0)
            break;
        int counter=0;
        for(int i=a; i<=b; i++)
        {
            if(square[i]==1)
                counter++;
        }
        pf("%d\n",counter);
    }
    return 0;
}
