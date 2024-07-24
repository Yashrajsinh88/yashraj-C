#include<stdio.h>

int main(){


// Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit.

    // float celcius;
    // float fahrenheit;

    // printf("Celcius Is :");
    // scanf("%f",&celcius);

    // fahrenheit= (celcius*9/5)+32;
    // printf("Fahrenheit Is %f",fahrenheit);

   
    //  Q.2 Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

//     int baseSalary,hra,da,ta,sum;

//     printf(" Basesalary Enter:");
//     scanf("%d",&baseSalary);

//     printf("HRA Enter");
//     scanf("%d",&hra);

//     printf("DA Enter:");
//     scanf("%d",&da);

//     printf("TA Enter:");
//     scanf("%d",&ta);

//    int hra2=baseSalary*hra/100;
//    int da2=baseSalary*da/100;
//    int ta2=baseSalary*ta/100;

//     sum=hra2+da2+ta2+baseSalary;

//    printf("Gross salary is %d",sum);



// Q.3 Write a C Program to find the third angle of a right triangle if two other angles are given.

  int firstAngle;
  int secondAngle;
  int thirdAngle;

  printf("First Angle Is : ");
  scanf("%d",&firstAngle);

  printf("Second Angle Is : ");
  scanf("%d",&secondAngle);

  printf("Third Angle Is : %d" ,180-(firstAngle+secondAngle));
  
   return 0;
}