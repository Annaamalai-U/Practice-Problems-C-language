#include<stdio.h>
int main()
{
    int i,j,N,k;
    int arr[100][100];
    int flag1,flag2;
    printf("Enter the order of the Matrix:");
    scanf("%d",&N);
    k=(N-1);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("Enter the %d , %d element:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d",arr[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
           if  ((arr[i][j]%2==0 && arr[(k-i)][j]%2==0) || (arr[i][j]%2!=0 && arr[(k-i)][j]%2!=0))
           {
              flag1=0;
           }

           else
           {
               flag1=1;
               goto label;
           }

        }
    }
    label:
    if(flag1==0)
        printf("Yes");
    else
    {
     printf("no");
    }
    printf("\n");

    printf("%d",flag1);

}
