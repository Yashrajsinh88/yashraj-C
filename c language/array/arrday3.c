#include<stdio.h>

int main(){

    int ROWS = 2;
    int COLS = 3;

    int arr[ROWS][COLS];
    int transposeMatrix[COLS][ROWS];

    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            printf("Element Is %d %d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

        for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLS; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

        for(int i=0; i<COLS; i++){
        for(int j=0; j<ROWS; j++){
         transposeMatrix[i][j]=arr[j][i] ;
        }
        printf("\n");
    }

        for(int i=0; i<COLS; i++){
        for(int j=0; j<ROWS; j++){
            printf("%d ",transposeMatrix[i][j]);
        }
        printf("\n");
    }
     
    return 0;
}