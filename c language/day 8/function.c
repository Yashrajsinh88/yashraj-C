// #include<stdio.h>

// float areaCircle(float rad);
// float areaSquar(float side);
// float arearectangle(int a , int b);

// int main(){
//     float rad;
//     printf("enter radius");
//     scanf("%f",&rad);
//     printf("circle is %f\n:",areaCircle(rad));
    
//     float side;
//     printf("enter side :");
//     scanf("%f",&side);
//     printf("squar is %f\n", areaSquar(side));

//     int a,b;
//     printf("enter a");
//     scanf("%d",&a);

//     printf("enter b");
//     scanf("%d",&b);

//     float s=arearectangle(a , b);
//     printf("rac is %f",s);
//     return 0;
// }

// float areaCircle(float rad){
//     return 3.14 * rad * rad;
// }

// float areaSquar(float side){
//     return side * side;
// }

// float arearectangle(int a , int b){
//     return a*b;
// }

// C program to swap two variables
#include <stdio.h>

// Driver code
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);

    // Using a temporary variable to swap the values
    // Store the value of x in a temporary variable
    int temp = x;
    // Assign the value of y to x
    x = y;
    // Assign the value stored in the temporary variable to
    // y
    y = temp;

    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}