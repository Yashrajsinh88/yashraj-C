#include<stdio.h>

int main(){

    // Q.1 Write a Program to find all the negative elements from a given 1D array.

    // int arr[50];
    // int n,i;

    // printf("Enter size of array :");
    // scanf("%d",&n);

    // printf("Enter element in array :");

    // for(i=0; i<n; i++){
    //     scanf("%d",&arr[i]);
    // }

    // printf("Nagative Elementns are :");
    // for(i=0; i<n; i++){
    //     if(arr[i] < 0 ){
    //         printf("%d",arr[i]);
    //     } 
    // }

    // Q.2 Write a Program to find the largest element from a given 2D array.

    // int arrTwo[3][3];
    // int max = 0;

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         // printf("number is %d %d :",i,j);
    //         scanf("%d",&arrTwo[i][j]);
    //     }
    //     printf("\n");
    // }
    //     for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         if(arrTwo[i][j] > max){
    //             max = arrTwo[i][j];
    //         }
    //     }
    //     printf("\n");
    // }
    // printf("Largest Number Is %d: ",max);

    // Q.3 Write a Program to find the transpose matrix of a given 2D array.

    // int arrTwoD[3][3];
    // int transposeMatrix;

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         printf("Element Is  %d %d : ",i,j);
    //         scanf("%d",&arrTwoD[i][j]);
    //     }
    // }

    //     for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         printf("%d ",arrTwoD[j][i]);
    //     }
    //     printf("\n");
    // }


//     // Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.

    
int arr[3][3];
    int row, col;
    int rowSum=0, colSum=0;

    // Input values 2D array
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Enter value at row %d and col %d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum of row
    printf("Enter row no : ");
    scanf("%d", &row);
    if(row >= 0 && row < 3) {
        for(int j=0; j<3; j++) {
            printf("%d ", arr[row][j]);
            rowSum += arr[row][j];
        }
        printf("\nSum of row elements is %d\n", rowSum);
    } else {
        printf("Invalid row number!\n");
    }

    // Calculate sum of column
    printf("Enter col no : ");
    scanf("%d", &col);
    if(col >= 0 && col < 3) {
        for(int i=0; i<3; i++) {
            printf("%d ", arr[i][col]);
            colSum += arr[i][col];
        }
        printf("\nSum of col elements is %d\n", colSum);
    } else {
        printf("Invalid col number!\n");
    }
    return 0;
}