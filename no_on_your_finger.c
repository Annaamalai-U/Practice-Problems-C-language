#include<stdio.h>
#include<string.h>
int main()
{
    int n,ans;
    printf("Enter a Number:");
    scanf("%d",&n);
    ans=n%8;
    if(ans==0)
    {
        printf("Finger->2");
    }
    else if(ans==6 || ans==7)
    {
        ans=10-ans;
        printf("Finger->%d",ans);
    }
    else
    {
         printf("Finger->%d",ans);
    }
}
