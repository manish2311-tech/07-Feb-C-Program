#include <stdio.h> // stdio :standard input output
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

for k :
completely depends on i
*/
int main() {
   for(int i=1;i<=5;i++){
    for(int k=i;k<=5;k++){
        printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("%d ",j);
    }
     printf("\n");
   }
    return 0;
}