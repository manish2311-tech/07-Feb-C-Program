#include <stdio.h> // stdio :standard input output

int main() {
    // relational operator:
    // < > <= >= == !=
    int a=10,b=1;
    printf("\n%d\n",a>b);
    printf("\n%d\n",a<=b);
    printf("\n%d\n",a==b);
    printf("\n%d\n",a!=b);

    // logical operator :
    // && || !
    int log_1=10;
    printf("\n%d\n",log_1>2 && log_1<20);
    printf("\n%d\n",log_1>2 || log_1<10);
    printf("\n%d\n",!(log_1>0));

    // Assignment operator
    // = += -=
    int num1=5;
    num1+=3;
    printf("%d\n",num1);

    int num2=10;
    num2-=2;
    printf("%d\n",num2);

    // ternary operator

    return 0;
}