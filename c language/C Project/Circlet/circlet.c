#include<stdio.h>

int main(){
    int arr[4];
    printf("enter a number");

    for(int i=0;i<=4;i++){
       printf("enter value at the index %d : ",i);
     scanf("%d",&arr[i]);

    }
     for(int i=0;i<=4;i++){
    if (arr[i]<0)
    {
        printf("%d",arr[i]);
    }
    else{
        printf(" ");
    }
     }
   

    // Q.2 Write a Program to find the largest element from a given 2D array.

//     int arr[3][3];
//     int value;
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
//     printf("arr is %d and  %d ",i, j);
//     scanf("%d",&arr[i][j]);
  
// }
// }
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
   
//     printf(" %d ", arr[i][j]);
  
// }
// printf("\n");
// }
// for(int i=0;i<3;i++){
// for(int j=0;j<3;j++){
   
// if(i>=j){
//     value=arr[i][j];
   
// }
  
// }
// printf("\n");
// }
//  printf("%d",value);

// Q.3 Write a Program to find the transpose matrix of a given 2D array.
// int row=3;
// int cols=3;
//  int reversMatrix[row][cols];
//  int matrix[cols][row];

// for(int i=0;i<row;i++){
//     for(int j=0;j<cols;j++){
//         printf("arr %d is %d : ",i, j);
//         scanf("%d",&reversMatrix[i][j]);
//     }
// }
// for(int i=0;i<row;i++){
//     for(int j=0;j<cols;j++){
//         printf("%d",reversMatrix[i][j]);
//     }
//     printf("\n");
// }
// for(int i=0;i<cols;i++){
//     for(int j=0;j<row;j++){
//     matrix[i][j]=reversMatrix[j][i];
//     }
//     printf("\n");
// }
// for(int i=0;i<cols;i++){
//     for(int j=0;j<row;j++){
//      printf("%d",matrix[i][j]);
//     }
//     printf("\n");
// }

// Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.


// int row=3;
// int col=3;
// int arr[row][col];

// for(int i=0;i<row;i++){
// for(int j=0;j<col;j++){
//     printf("arr is %d and  %d ",i, j);
//     scanf("%d",&arr[i][j]);
  
// }
// }
// for(int i=0;i<row;i++){
// for(int j=0;j<col;j++){
   
//     printf(" %d ", arr[i][j]);
  
// }
// printf("\n");
// }
// for(int i=0;i<row;i++){
// for(int j=0;j<col;j++){
   
//    if (i>=j){
//    {
//      printf(" %d ", arr[i][j]);
//    }
   
  
// }
// printf("\n");
// }

//    return 0;
//  }
// }
}