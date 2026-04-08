/*
pre increement
post increement
*/
#include <stdio.h> // stdio :standard input output
int main() {
   int a=5;
   int b=a++;

   printf("\npost incree a:%d\n",a);  //6
   printf("\npost incree b:%d\n",b); //5

   int x=10;
   x++;
   printf("\nx=%d\n",x);

   int p=5;
   int q=++p;

   printf("\npre incree p is %d\n",p); //6
   printf("\npre incree q is %d\n",q); //6


    return 0;
}