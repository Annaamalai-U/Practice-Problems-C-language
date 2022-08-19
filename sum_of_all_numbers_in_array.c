#include<stdio.h>
int main()
{
    int arr[100],s,i,n;
    scanf("%d",&n);
    s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    return s;
    printf(s);
}
