#include <stdio.h> // stdio :standard input output
int main() {
   int choice=3;
    switch(choice){
        case 1:
        printf("\nSunday");
        break;
        case 2:
        printf("\nMonday");
        break;
        case 3:
        printf("\nTuesday");
        break;
        default:
        printf("\ninvalid input");
    }


    int a=10,b=2;
    char op ='*';

    switch(op){
        case '+':
        printf("\nsum is %d",a+b);
        break;
        case '-':
        printf("\nsub is %d",a-b);
        break;
        case '*':
        printf("\nmul is %d",a*b);
        break;
        default:
        printf("invalid input");
        
    }

    return 0;
}