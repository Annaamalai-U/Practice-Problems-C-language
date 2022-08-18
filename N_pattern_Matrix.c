#include<stdio.h>
int main()
{
    int i,j,N;
    int arr[100][100];
    printf("Enter the order of the Matrix:");
    scanf("%d",&N);
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
            if(j==0)
            {
                printf("%d",arr[i][j]);
            }
            else if(i==j)
            {
                printf("%d",arr[i][j]);
            }
            else if(j==(N-1))
            {
                printf("%d",arr[i][j]);
            }
        }
    }
}
