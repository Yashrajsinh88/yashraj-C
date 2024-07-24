// 1111111111111111111111111111111111111111
// #include <stdio.h>

// int main() {

//     int year ;

//     printf("Enter the year: \n ");
//     scanf("%d",&year);

  
  
//   if (year%4==0 && year%100==0 && year%400==0){
//         printf("It's a Leap Year \n");   
//   }else if (year%4==0 && year%100!=0){
//         printf("It's a Leap Year \n");    
//   }else if ((year%4!=0) || (year%400!=0)){
//         printf("It's not a leap Year");
//   }else{
//         printf("Enter a velid year ");
//   }
//   return 0;
// }

// 2222222222222222222222222222222222222222222


#include <stdio.h>

float baseSalary(float salary, float hra, float da, float ta);

int main (){

    float salary,hra,da,ta ;
    
    printf("Enter Base salary ") ;
    scanf("%f",&salary) ;
    printf("Enter Hra ") ;
    scanf("%f",&hra) ;
    printf("Enter Da ");
    scanf("%f",&da);
    printf("Enter Ta ");
    scanf("%f",&ta);


    baseSalary(salary,hra,da,ta);

  
}

float baseSalary(float salary, float hra,float da,float ta){

     float grossSalary = salary+(salary* (hra/100))+(salary* (da/100))+(salary* (ta/100)) ;

    printf("Your gross Salary is %f",grossSalary);
    
return 0;
}


// 3333333333333333333333333333333333333333333333


// #include <stdio.h>

// int main() {
//     int number, i = 0;
//     printf("Enter a number: ");
//     scanf("%d", &number);

   
//     while (number != 0) {
//         i++;
//         number /= 10;
//     }

//     printf("Number of digits in the number is : %d\n", i);

// return 0;
// }
