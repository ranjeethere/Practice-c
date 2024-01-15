#include<stdio.h>

int main(){

 int n,arr[10],signal = 0;
 printf("Enter the number of array :");
 scanf("%d",&n);
 //taking input un array.
 for(int i=0;i<n;i++)
 {
    printf("Enter the values [%d] = ",i);
    scanf("%d",&arr[i]);
 }
 //
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr[1]==arr[j])
        {
            signal == 1;
            printf("The dupliate array are %d and %d :",i,j);
        }
    }
  }
  if(signal == 0){

  printf("there is no duplicate array :");
  }

}