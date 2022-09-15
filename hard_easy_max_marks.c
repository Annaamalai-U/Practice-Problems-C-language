#include<stdio.h>
#include<string.h>
#include <math.h>
int main()
{
    int n,x,y,p,q,a,b,n1,n2;
    int quot1,quot2;
    int tot_time_ec=0;
    int tot_time_diff=0;
    int tot_marks_ec=0;
    int tot_marks_diff=0;
    int tot1=0;
    int tot2=0;
    printf("Enter Total no.of.Minutes:");
    scanf("%d",&n);
    printf("Enter Marks for easy problem:");
    scanf("%d",&x);
    printf("Enter Marks for difficult problem:");
    scanf("%d",&y);
    printf("Enter time to solve an easy problem:");
    scanf("%d",&p);
    printf("Enter time to solve an difficult problem:");
    scanf("%d",&q);
    printf("No.of easy problems solved:");
    scanf("%d",&a);
    printf("No.of difficult problems solved:");
    scanf("%d",&b);
    tot_time_ec=p*a;
    tot_time_diff=q*b;
    tot_marks_ec=x*a;
    tot_marks_diff=y*b;
    check:
    if(tot_time_ec>n || tot_time_diff>n)
    {
        if(tot_time_ec>n)
        {

            a=a-1;
            tot_time_ec=p*a;
            goto check;
        }
        else
        {
            b=b-1;
            tot_time_diff=q*b;
            goto check;
        }
    }
    n1=n;
    n1=n1-tot_time_diff;
    quot1=n1/p;
    tot1=(b*y)+(quot1*x);
    n2=n;
    n2=n2-tot_time_ec;
    quot2=n2/q;
    tot2=(a*x)+(quot2*y);
    if(tot1>tot2)printf("Maximum marks get scored when he solves %d easy and %d hard problems",quot1,b);
    else if(tot2>tot1)printf("Maximum marks get scored when he solves %d easy and %d hard problems",a,quot2);
    else printf("Maximum marks get scored when he solves %d easy and %d hard problems",a,quot2);

}
