#include<stdio.h>
#include<string.h>

int main(){


// Q.1 Write a Program to find the length of a string using a Pointer.
//  char str[50];
//  printf("Enter Your Name : ");
//  fgets(str,50,stdin);
//  puts(str);

// int  lenth=strlen(str);

// printf("Lenth Is %d",lenth-1);

// Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

int ROW;
int COLS;
printf("Enter The Number");
scanf("%d",&ROW);
scanf("%d",&COLS);
int mutiplyNumber[ROW][COLS];
int number[ROW][COLS];
for(int i=0;i<ROW;i++){
    for(int j=0;j<COLS;j++){
       printf("Your Arr %d Is %d : ",i,j);
       scanf("%d",&mutiplyNumber[i][j]);
    }
}
    for(int i=0;i<ROW;i++){
    for(int j=0;j<COLS;j++){
      
       printf("%d",mutiplyNumber[i][j]);
    }
 printf("\n");
}
for(int i=0;i<ROW;i++){
    for(int j=0;j<COLS;j++){
        number[i][j]=mutiplyNumber[i][j]*mutiplyNumber[i][j]*mutiplyNumber[i][j];
    }

}
for(int i=0;i<ROW;i++){
    for(int j=0;j<COLS;j++){
       printf("%d ",number[i][j]);
    }
printf("\n");
}

    return 0;
}