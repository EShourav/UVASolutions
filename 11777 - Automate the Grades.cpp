#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        int t1,t2,f,a,ct[3];
        sf("%d %d %d %d",&t1,&t2,&f,&a);
        for(int i=0; i<3; i++)
            sf("%d",&ct[i]);
        sort(ct,ct+3);
        int ctmarks = ct[1]+ct[2];
        double c = ctmarks/(double)2;
        int total = t1+t2+f+a+c;
        if(total>=90)
            pf("Case %d: A\n",ca);
        else if(total<90 && total>=80)
            pf("Case %d: B\n",ca);
        else if(total<80 && total>=70)
            pf("Case %d: C\n",ca);
        else if(total<70 && total>=60)
            pf("Case %d: D\n",ca);
        else
            pf("Case %d: F\n",ca);
    }
    return 0;
}
