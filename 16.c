//C program to Print total number of row element and column  elements
#include<stdio.h>
int main()
{
    int n,m;
    printf("input the total number row and colums: \n");
    scanf("%d%d",&n,m);
    int a[n][m];
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    {
       // printf("enter the elements: %d",i+1,j+1);
        scanf("%d",&a[i][j]);
            }}
            //printing the elements in the matrix
            for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++)
            {
                printf("Elements in the matrix are : %d",a[i][j]);
                            }
                            printf("\n");
                            }
    return 0;
}
