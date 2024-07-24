#include<stdio.h>

int main(){

// Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do do-while loop.

    // char n = 'a';

    // do{
    //     printf("%c ",n);
    //     n=n+4;
    // }while(n <'z');

// Q.2 Write a Program to count the total number of digits in a number.

    // int number;
    // printf("Enter The Number");
    // scanf("%d",&number);

    // int count=0;
    // int i=0;

    // while(number!=0){
    //     number=number/10;
    //     count++;
    // }
    // printf("Total number of digits %d",count);


// Q.3 Write a Program to find the sum of the first and the last digit of a number.

  int num;
   printf("Enter Num : ");
 scanf("%d",&num);
  int lastnum=num%10;
  int firstnum;

while(num!= 0){
    firstnum=num;
    num=num/10;
}

printf("Sum Is : %d",firstnum+lastnum);

    return 0;
}