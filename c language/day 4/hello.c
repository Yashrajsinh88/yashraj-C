#include<stdio.h>

int main(){
     
 int a;
 printf("enter the value of a");
 scanf("%d", &a);
 
 int c;
 printf("enter area");
 scanf("%d", &c);
 int b;
b=c/a;
printf("B is a %d \n",b);

int peramiter;
peramiter=a+b;
printf("peramiter is %d" ,peramiter);
 
 return 0;
}