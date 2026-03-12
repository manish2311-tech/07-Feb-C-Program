#include <stdio.h> // stdio :standard input output
int main() {
/*
1
12
123
1234
12345
*/
for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
    printf("\n");
    }
    return 0;
}