#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,t,i,j,c=0;
    int arr[100];
    scanf("%d",t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0;j<n;j++)
        {
            if(arr[j]<=0)
            {
                c++;
            }
        }
        printf("%d",c);
        if (c<=k)
            printf("YES");
        else
            printf("NO");
    }
}
