#include<stdio.h>

// 111111111111111111111111111111111
// void fibo();

// int main(){
    
// fibo();

// return 0;
// }

// void fibo(){
// int a=0;
// int b=1;
// int result;
// for (int i = 1; i<=8; i++)
// {
//     printf("%d",a);
//     result=a+b;
//      a=b;
//      b=result;
// }
// }


// 2222222222222222222222222222222222222

int myPattern();

int main(){

myPattern();
return 0;
}

int myPattern(){
    for(int i=5; i>=1; i--){
       for(int j=i; j>=1; j--){
        printf("%d",j);
       }
       printf("\n");
    }
}



// 3333333333333333333333333333333333333333
// #include <stdio.h>

// int leapYear();

// int main() {

// leapYear();
//   return 0;
// }

// int leapYear(){
//     int year ;

//     printf("Enter the year: \n ");
//     scanf("%d",&year);

//   if (year%4==0 && year%100==0 && year%400==0){
//         printf("Its a Leap Year \n");   
//   }else if (year%4==0 && year%100!=0){
//         printf("Its a Leap Year \n");    
//   }else if ((year%4!=0) || (year%400!=0)){
//         printf("Its not a leap Year");
//   }else{
//         printf("Enter a velid year ");
//   }
// }
