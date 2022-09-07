#include <stdio.h>
int main()
{
    int arr[]={3,4,1,6,5};
    int s1,s2,n,p,m;
    p=(sizeof(arr)/sizeof(arr[0]));
    n=p+1;
    s1=0;
    for(int i=0;i<p;i++)
    {
        s1=s1+arr[i];
    }
    s2=(n*(n+1))/2;
    m=s2-s1;
    printf("The missing element= %d",m);
}
