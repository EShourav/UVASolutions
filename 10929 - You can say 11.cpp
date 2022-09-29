#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s.length()==1 && s=="0")
            break;
        int len = s.length();
        int even = 0;
        int odd = 0;
        for(int i=0; i<len; i++)
        {
            if(i%2==0)
            {
                if(s[i]=='1')
                    even+=1;
                else if(s[i]=='3')
                    even+=3;
                else if(s[i]=='5')
                    even+=5;
                else if(s[i]=='7')
                    even+=7;
                else if(s[i]=='9')
                    even+=9;
                else if(s[i]=='2')
                    even+=2;
                else if(s[i]=='4')
                    even+=4;
                else if(s[i]=='6')
                    even+=6;
                else if(s[i]=='8')
                    even+=8;
            }
            else
            {
                if(s[i]=='1')
                    odd+=1;
                else if(s[i]=='3')
                    odd+=3;
                else if(s[i]=='5')
                    odd+=5;
                else if(s[i]=='7')
                    odd+=7;
                else if(s[i]=='9')
                    odd+=9;
                else if(s[i]=='2')
                    odd+=2;
                else if(s[i]=='4')
                    odd+=4;
                else if(s[i]=='6')
                    odd+=6;
                else if(s[i]=='8')
                    odd+=8;
            }
        }
        if(odd>even)
            swap(even,odd);
        int dif = even-odd;
        if(dif%11==0)
            cout<<s<<" is a multiple of 11."<<endl;
        else
            cout<<s<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
