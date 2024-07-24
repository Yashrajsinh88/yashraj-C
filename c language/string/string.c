#include<stdio.h>
#include<string.h>

int main(){
    
    // char str[50]={"hello world"};
    // printf("%c",str[3]);

    // for(int i=0; i<50; i++){
    //     printf("%c",str[i]);
    // }

    // char str1[11]={'h','e','l','l','o','w','o','r','l','d','\0'};
    // printf("%c",str1[2]);

    // char myName[30];
    // scanf("%s",&myName);
    // printf("%s",myName);

    // char fullName[30];
    // fgets(fullName,30,stdin);
    // puts(fullName);
     

// practice
    //  int count = 0;
    //  char fullName[50];
    //  printf("enter your name\n");
    //  fgets(fullName, 50 ,stdin);
    //  puts(fullName);
    //  for(int i=0; fullName[i]!='\0'; i++){
    //      count++;
    //  }
    //  printf("count is %d\n",count-1);

// q:-3

// char reverce[12] ="yashrajsinh";
// printf("enter text \n");

// for(int i=0; reverce[i]!='\0';i++){
//     printf("%c \n",reverce[i]);
// }

// q:-4

char name[100];
 int count=0;
//  int i;
 int constant=0;
printf("Enter Text");

fgets(name,100,stdin);

int lenth = name[100];

for(int i=0; name[i]!='\0';i++){
if(name[i]=='a'||'e'||'i'||'o'||'u'){
   count++;
}
else{
   constant++;
}

}
printf("count is %d\n",count-1);
printf("constant is %d",constant);
printf("constant is %d",lenth);
    return 0;
}