#include<stdio.h>
#include<string.h>
int main()
{
    int N,n,x;
    int tot_arr_time=0;
    int tot_op_time=0;
    int tot_wait_time=0;
    printf("Enter total Number of patients:");
    scanf("%d",&N);
    printf("Frequency of each patient:");
    scanf("%d",&x);
    n=N-1;
    tot_arr_time=n*x;
    tot_op_time=n*10;
    tot_wait_time=tot_op_time-tot_arr_time;
    printf("Total Wait time: %d",tot_wait_time,"Minutes");
}
