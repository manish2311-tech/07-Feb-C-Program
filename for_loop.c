/*
loop: iterative,repeatitive
entry control :
for 
while

exit control :
do while
*/
#include <stdio.h> // stdio :standard input output
int main() {
    for(int i=1;i<=5;i++){
        printf("\nHello\n");
    }
  
    for(int i=1;i<=5;i++){ // 6<=5 // 6
        printf("\n%d\n",i); //1 2 3 4 5 //5
    }
    //11 times line executed

    
    return 0;
}