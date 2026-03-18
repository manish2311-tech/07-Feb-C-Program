#include <stdio.h> // stdio :standard input output
void swap(int a,int b){ //a=10 b=20
     int temp=a; //temp=10
    a=b;//a=20
    b=temp;//b=10
}

int main() {
   int a=10,b=20;
    printf("\nBefore swapping a=%d and b=%d \n",a,b);
   swap(a,b);
     printf("\nAfter swapping a=%d and b=%d \n",a,b);
    return 0;
}