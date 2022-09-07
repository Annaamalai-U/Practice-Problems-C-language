#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int arr[10];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lli",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lli",sum);
    }
