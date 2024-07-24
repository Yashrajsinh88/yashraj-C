#include<stdio.h>
int main(){

// 16-04-2024

    printf("hello");
    for(int i=10;i>=0;i--){
        printf("%d\n",2*i);
        if(i==4){
              printf("hello inside condition\n");
        }
        printf("%d\n",i);
    }


int a;

printf("enter the month");
scanf("%d", &a);

if (a==1)
{
    printf("january");
}else if (a==2)
{
    printf("fabruary");
}else if (a==3)
{
    printf("march");
}else if (a==4)
{
    printf("april");
}else if (a==5)
{
    printf("may");
}else if (a==6)
{
    printf("june");
}else if (a==7)
{
    printf("july");
}else if (a==8)
{
    printf("august");
}else if (a==9)
{
    printf("septembar");
}else if (a==10)
{
    printf("october");
}else if (a==11)
{
    printf("november");
}else if (a==12)
{
    printf("december");
}else{
    printf("no data found");
}
    return 0;
}