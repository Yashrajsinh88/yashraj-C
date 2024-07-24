#include<stdio.h>
#include<string.h>

int main(){

    struct student{

        int stu_id;
        char stu_name[30];
        int stu_age;
        char stu_course[30];
        char stu_city[30];
        int stu_standard;
        char stu_school[30];
    };

   struct student student1;
   printf("Enter Student ID : ");
   scanf("%d",&student1.stu_id);
   printf("Student1 ID is : %d \n",student1.stu_id);

   strcpy(student1.stu_name,"Yashrajsinh");
   printf("Studant Name Is : %s\n",student1.stu_name);

   printf("Enter Student AGE : ");
   scanf("%d",&student1.stu_age);
   printf("Student1 AGE is : %d \n",student1.stu_age);

//    printf("Enter Student COURCE : ");
//    scanf("%s",&student1.stu_course);
//    printf("Student1 COURCE is : %s\n",student1.stu_course);

//    printf("Enter Student CITY : ");
//    scanf("%s",&student1.stu_city);
//    printf("Student1 CITY is : %s \n",student1.stu_city);

   printf("Enter Student STANDARD : ");
   scanf("%d",&student1.stu_standard);
   printf("Student1 STANDARD is : %d \n",student1.stu_standard);

//    printf("Enter Student SCHOOL : ");
//    scanf("%s",&student1.stu_school);
//    printf("Student1 SCHOOL is : %s \n",student1.stu_school);


//    with strcpy

//    strcpy(student1.stu_age,"20");
//    printf("Studant AGE Is : %d\n",student1.stu_age);

   strcpy(student1.stu_course,"Full Stack Devlopment");
   printf("Studant COURCE Is : %s\n",student1.stu_course);

   strcpy(student1.stu_city,"AHMEDABAD");
   printf("Studant CITY Is : %s\n",student1.stu_city);

//    strcpy(student1.stu_standard,"BCA Sem 5");
//    printf("Studant STANDARD Is : %s\n",student1.stu_standard);

   strcpy(student1.stu_school,"SP School");
   printf("Studant SCHOOL Is : %s\n",student1.stu_school);

   return 0;
}