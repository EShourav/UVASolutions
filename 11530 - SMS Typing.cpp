#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    int t;
    sf("%d",&t);
    getchar();
    for(int ca=1; ca<=t; ca++)
    {
        string s;
        getline(cin,s);
        int len = s.length();
        int count=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a' || s[i]=='d' || s[i]=='g' || s[i]=='j')
                count++;
            else if(s[i]=='m' || s[i]=='p' || s[i]=='t' || s[i]=='w' || s[i]==' ')
                count++;
            else if(s[i]=='b' || s[i]=='e' || s[i]=='h' || s[i]=='k')
                count+=2;
            else if(s[i]=='n' || s[i]=='q' || s[i]=='u' || s[i]=='x')
                count+=2;
            else if(s[i]=='c' || s[i]=='f' || s[i]=='i' || s[i]=='l')
                count+=3;
            else if(s[i]=='o' || s[i]=='r' || s[i]=='v' || s[i]=='y')
                count+=3;
            else if(s[i]=='s' || s[i]=='z')
                count+=4;
        }
        pf("Case #%d: %d\n",ca,count);
    }
    return 0;
}
