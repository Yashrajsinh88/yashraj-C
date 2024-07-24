#include<stdio.h>

int main(){

// Q.1 Write a Program to check whether a number is even or odd using the ternary operator.

//    int n;
//    printf("Enter a Number");
//    scanf("%d",&n);

//    if(n%2==0){
//     printf("Number Is Even");
//    }else{
//     printf("Number is odd");
//    }
//     return 0;
// }

// Q.2 Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:

#include <stdio.h>
float calculateBill(int units) {
    float totalBill = 0;
    if (units <= 50) {
        totalBill = units * 0.50;
    } else if (units <= 150) {
        totalBill = 25 + ((units - 50) * 0.75);
    } else if (units <= 250) {
        totalBill = 100 + ((units - 150) * 1.20);
    } else {
        totalBill = 220 + ((units - 250) * 1.50);
    }
    float surcharge = totalBill * 0.20; 
    totalBill += surcharge;
    return totalBill;
}

int main() {
    int units;
    printf("Enter the total units of electricity consumed: ");
    scanf("%d", &units);
    float billAmount = calculateBill(units);
    printf("Total electricity bill: Rs. %.2f\n", billAmount);
return 0;
}