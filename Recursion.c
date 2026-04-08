/*
recursion is function calling function
1
2
3
4
5
*/
#include<stdio.h>
void print(int n){
    if(n>5){
        return;
    }
    printf("\n%d\n",n);
    print(n+1); 
}


int main() {
   print(1);
    return 0;
}