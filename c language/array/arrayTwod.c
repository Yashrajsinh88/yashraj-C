#include<stdio.h>

int main(){
    
    int arr[5]={8,1,3,6,7};
    int reverse=0;

    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }


// 11111111111111111111
 
//   int firstarr[2][2];
//     int secondarr[2][2];
//     int sumarr[2][2];

// printf("hello");
//     printf("first Array");
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//            scanf("%d",&firstarr[i][j]);
//         }
//     }
//         printf("second Array");
//         for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//            scanf("%d",&secondarr[i][j]);
//         }
//     }


//         for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//          sumarr[i][j]= firstarr[i][j]+secondarr[i][j];
//          printf("%d",sumarr[i][j]);
           
//         }
//         printf("\n");
//     }  


    // 222222222222222222222222222222

    // int arr[3][3];
    // int max = 0;

    // printf("Enter elements:\n");
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         printf("element is %d %d :" ,i,j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    // // max=arr[0][0];

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         if(arr[i][j] > max) {
    //             max = arr[i][j];
    //         }
    //     }
    // }

    // printf("Maximum element in the array: %d\n", max);


    // 333333333333333333333333333333333333333


     int arr[3][3];
    int min;

    printf("Enter elements:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // min=arr[0][0];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Minimum element in the array: %d\n", min);

    return 0;
}


