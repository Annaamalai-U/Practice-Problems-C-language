#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,s,f;
    printf("Enter a Word:");
    scanf("%s",str);
    s=(strlen(str)-1);
    for(i=0;i<=s;i++)
    {
        if(str[i]==str[(s)])
        {
            f=0;
            s--;
        }
        else if(str[i]!=str[s])
        {
            f=1;
            goto label;
        }
    }
    label:
        {
            if (f==0)
            printf("%s is a PALINDROME",str);
            else
            printf("%s is NOT A PALINDROME",str);
        }
}
