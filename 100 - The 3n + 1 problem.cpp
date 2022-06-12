#include<stdio.h>
#include<iostream>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int a,b;
    while(sf("%d %d",&a,&b)==2)
    {
        int counter, maxCount=0;
        if(a>b)
            swap(a,b);
        for(int i=a; i<=b; i++)
        {
            int n=i;
            counter=1;
            while(n>1)
            {
                if(n%2==0)
                    n=n/2;
                else
                    n=(n*3)+1;
                counter++;
            }
            if(counter>=maxCount)
                maxCount=counter;
        }
        //printf("%d %d %d\n",a,b,maxCount);
        cout<<a<<" "<<b<<" "<<maxCount<<endl;
    }
    return 0;
}
