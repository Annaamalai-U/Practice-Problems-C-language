#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,s,i,a;
    scanf("%d", &n);
    if (n<0)
        return 0;
    else
    {
        if(n>=10000 && n<=99999)
        {
            s=0;
            for(i=1;i<=5;i++)
            {

                a=n%10;
                s=s+a;
                n=n/10;
            }
            printf("%d",s);
        }
        else
            return 0;
    }

    return 0;
}
