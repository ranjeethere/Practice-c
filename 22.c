#include<stdio.h>
//C Program to Find the largest no in an array using loops

    int main()
    {
        int arr[100];
        int num;
 // taking total number of array
        printf("Enter the number of array size \n");
        scanf("%d",&num);
 
  // taking input from user 
        for(int i = 0;i < num;++i)
        {
            printf("\n Enter the Elements %d" ,i + 1 );
            scanf("%d",&arr[i]);
        }
        //storing largest element in array
        for (int i = 1; i < num; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

  return 0;
    
}