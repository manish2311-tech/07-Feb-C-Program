#include <stdio.h> // stdio :standard input output
/*
if : if cond is true :true statement print else nothing
if else :if cond is true :true statement else false statement
print
*/
int main() {
   int age=12;
   if(age>=18){
    printf("\nYou can Vote!!!\n");
   }

   int num1=12;
   if(num1>0){
    printf("No is Positive\n");
   }

   /*
   if else:
   if condition is true true statement print else false statement print
   
   */

//    int no1=13;
//    if(no1%2==0){
//     printf("even no");
//    }else{
//     printf("odd no");
//    }

   int marks=49;

//    if(marks>=33){
//     printf("\nPass\n");
//    }else{
//     printf("Fail\n");
//    }

//ternery operator :
char result=(marks>=33)?'P':'F'; 
printf("\nresult is %c\n",result);//P


int no1=85,no2=410;
// if(no1>no2){
//     printf("\nmax no is %d\n",no1);
// }else
// {
//     printf("\nmax no is %d\n",no2);
// }

int max=(no1>no2)?no1:no2;
printf("max no  is %d",max);

    return 0;
}