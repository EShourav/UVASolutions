#include <stdio.h>

int main()
{
    long long int i, j, n;
    int s[100000];
    while(scanf("%lld", &n) && n>=0)
    {
        if(n==0)
            printf("0\n");
        else
        {
            i=1;
            while(n!=0)
            {
                s[i++]=n%3;
                n=n/3;
            }
            for(j=i-1; j>0; j--)
                printf("%d", s[j]);
            printf("\n");
        }
    }
    return 0;
}
