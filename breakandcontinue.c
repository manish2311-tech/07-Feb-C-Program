#include <stdio.h> // stdio :standard input output
int main() {
    // for(int i=1;i<=10;i++){
    //     if(i==5){
    //         break;
    //     }
    //     printf("\n%d\n",i);
    // }
        // int j=0;
        // while(j<=5){ //3<=5
            
        //   j++;
        //     if(j==3)
        //         continue;
        //      printf(" %d ",j);
             
        // }

    //     for (int i=1;i<=10;i++){


    //         if(i%2==0){
    //             if (i==6)
    //             continue;
    //             printf(" %d ",i);
    //         }
    //     }
    // return 0;
    // print all even number from 1 to 10 but skip
    // odd number (using continue)
    for (int i=1;i<=10;i++){
        if(i%2!=0)
            continue;
        printf(" %d ",i);
        
    }
}