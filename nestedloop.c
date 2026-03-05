#include <stdio.h> // stdio :standard input output
/*
1 2 3 4
1 2 3 4 
1 2 3 4
*/
int main() {
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++){
            printf(" %d ",j);
        }
        printf("\n");
    }

    /*
    * * *
    * * * 
    * * * 
    * * *
    */

    for(int i=1;i<=4;i++){
        for(int j=1;j<=3;j++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}