#include <stdio.h> // stdio :standard input output
int main() {
//    printf("\nstart\n");
//     goto end;
//     printf("This line will not print");
//     end:
//     printf("\nend\n");

int i=1;
start:
if(i<=5){
    printf("\n%d\n",i);
    i++;
    goto start;
}



    return 0;
}