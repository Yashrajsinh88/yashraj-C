# include<stdio.h>

int main(){

// q:-1
// q:-1
// q:-1
// q:-1
    int income;
    printf("enter your income");
    scanf("%d", &income);

    int per;

   if (income>0 && income<=10000)
   {
    per=income*5/100;
    printf("Your tax is %d", per);
    
   }else if (income>10001 && income<=20000)
   {
    per=income*10/100;
    printf("Your tax is %d", per);
   }else if (income>20001 && income<=30000)
   {
    per=income*15/100;
    printf("Your tax is %d", per);
   }else
   {
    per=income*20/100;
    printf("Your tax is %d", per);
   }


// // q:-2
// // q:-2
// // q:-2
// // q:-2

int month;
printf("enter the month");
scanf("%d" ,&month);

switch(month){
case 1:printf("month is January\n");
break;
case 2:printf("month is February \n");
break;
case 3:printf("month is March \n");
break;
case 4:printf("month is April \n");
break;
case 5:printf("month is May \n");
break;
case 6:printf("month is June \n");
break;
case 7:printf("month is July \n");
break;
case 8:printf("month is August \n");
break;
case 9:printf("month is September \n");
break;
case 10:printf("month is October \n");
break;
case 11:printf("month is November \n");
break;
case 12:printf("month is Desember \n");
break;
default:printf("no data found");
}

// // q:-3
// // q:-3
// // q:-3
// // q:-3

int product;
printf("enter your bill amount");
scanf("%d", &product);

float dis;

if (product>0 && product<=100)
{
    dis=product*5/100;
    printf("Your discount is: %f" ,dis );

}else if (product>101 && product<=500)
{
    dis=product*10/100;
    printf("Your discount is: %f" ,dis );
}else if (product>500)
{
    dis=product*15/100;
    printf("Your discount is: %f" ,dis );
}else{
    printf("you don't buy");
}

// // q:-4
// // q:-4
// // q:-4
// // q:-4

 float weight;
 float height;
 float bmi;

 printf("enter your weight");
 scanf("%f" ,&weight);

 printf("enter your height");
 scanf("%f",&height);

 bmi=weight/(height*height);

 if (bmi<18.5)
 {
    printf("You are Underweight %f" ,bmi);
 }else if (bmi>18.5 && bmi<24.9)
 {
    printf("You are Normal %f" ,bmi);
 }else if (bmi>25 && bmi<29.9)
 {
    printf("You are Overweight %f",bmi);
 }else if(bmi>=30){
    printf("You are Obese %f",bmi);
 }else{
    printf("data not found");
 }
 
// upper case lower case 
 char ch;
 printf("enter alfabet");
 scanf("%c",&ch);

 if (ch >= 'a' && ch <= 'z'){
   printf("lower case");

 }else if (ch >= 'A' && ch <= 'Z')
 {
   printf("upper case");
 }else{
   printf("that is not alfabet");
 }
 
 
   return 0;
}