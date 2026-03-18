#include <stdio.h> // stdio :standard input output
#include <string.h>
/*
Function :does some work
function without parameter and without return type
function with parameter and without return type
function without parameter and with return type
function with parameter and with return type




*/
void greet(){
    printf("\nHello World\n");
}
void sum(int a,int b){
    printf("\nsum is %d\n",a+b );
}
int mul(){
    //function without parameter and with return type

    int a=34,b=56;
    return a*b;
}
float div(int a,int b){
    return (float)a/b;
}

int main() {

    greet();
    sum(12,12);
    printf ("mul is %d",mul());
    printf ("\ndiv is %f",(div(10,3)));
    return 0;
}