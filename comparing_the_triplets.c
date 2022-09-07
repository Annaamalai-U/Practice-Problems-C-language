#include<stdio.h>
int main()
{
    int a0,a1,a2;
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0,b1,b2;
    scanf("%d %d %d",&b0,&b1,&b2);
    int a_score=0;
    int b_score=0;
    if(a0>b0)
    {
        a_score++;
    }
    else if(a0<b0)
    {
        b_score++;
    }
    if(a1>b1)
    {
        a_score++;
    }
    else if(a1<b1)
    {
        b_score++;
    }
    if(a2>b2)
    {
        a_score++;
    }
    else if(a2<b2)
    {
        b_score++;
    }
    printf("%d %d",a_score,b_score);
}
