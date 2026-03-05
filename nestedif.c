#include <stdio.h> // stdio :standard input output
int main() {
   int pass=1234;
   int otp=8765;
    if(pass==12345){
        if(otp==8765){
            printf("login success!!!");
        }else{
            printf("invalid OTP!!!");
        }
    }else{
        printf("wrong password");
    }
//max of 3 number
//a=12,b=45,c=2;
int a=120,b=45,c=20;
if(a>b){
    if(a>c){
        printf("\nA is greater\n");
    }else{
        printf("c is greater");
    }
}else{
     if(b>c){
        printf("B is greater");
    }else{
        printf("\nC is greater\n");
    }
}
    return 0;
}