#include <stdio.h> // stdio :standard input output
/*
Pointer is a variable that stores the address of some
other variable
*/
int main() {
  int a=10;
  int *p=&a;

  printf("\na is %d\n",a);
  printf("\nadress of a is %p\n",&a);
  printf("\npointer p is %p\n",p);
  printf("\n value stored in address of pointer %d",*p);
    char val[100];
    scanf("%s",val);
    // putc(val);
    return 0;
    
    // create a function with parameter to swap 2 numbers
}