#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100][100];
    int s1=0;
    int s2=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             if(i==j)
                 s1=s1+arr[i][j];
             if(i==(n-j-1))
                 s2=s2+arr[i][j];
        }
    }
    s=abs(s1-s2);
    printf("%d\n",s);

}
