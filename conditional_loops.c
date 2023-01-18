#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    char arr[10]={"one","two","three","four","five","six","seven","eight","nine"};
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for(int i=a;i<=b;i++)
    {
        if(a<9)
        {
            for(int j=a;j<=9;j++)
            {
                printf(arr[j-1]);
            }
        }
        if(a>9)
        {
            for(int k=a;k<=9;k++)
            {
                if(k%2==0)printf("even");
                else printf("odd");
            }
        }
    }

    return 0;
}
