#include<bits/stdc++.h>

#define sf scanf
#define pf printf
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s.length()==1 && s[0]=='0')
            break;
        int len = s.length();
        long long int result = 0;
        reverse(s.begin(), s.end());
        for(int i=0; i<len; i++)
        {
            long long int temp = pow(2, i+1) - 1;
            if(s[i]=='0')
                result += 0*temp;
            else if(s[i]=='1')
                result += 1*temp;
            else if(s[i]=='2')
                result += 2*temp;
            else if(s[i]=='3')
                result += 3*temp;
            else if(s[i]=='4')
                result += 4*temp;
            else if(s[i]=='5')
                result += 5*temp;
            else if(s[i]=='6')
                result += 6*temp;
            else if(s[i]=='7')
                result += 7*temp;
            else if(s[i]=='8')
                result += 8*temp;
            else if(s[i]=='9')
                result += 9*temp;
        }
        cout<<result<<endl;
    }
    return 0;
}
