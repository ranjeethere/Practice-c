//write a program in c to print a 3d array/
#include<stdio.h>
int main()
{
      int a[3][3][3];
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
               // printf("Enter the elments: ",a[i][j][k]);
                scanf("%d",&a[i][j][k]);
            }
        }
      }
      //printing elements in 3d array
       for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("\nEnter the elments: a[%d][%d][%d] %d\n",i,j,k,a[i][j][k]);
                //scanf("%d",&a[i][j][k]);
            }
        }
      }
}