#include <stdio.h> // stdio :standard input output
/*
fibonacci series : 1 1 2 3 5 8 13
sum of last 2 nos 
replace 1st varible with 2nd
replace 2nd variable with ans
display value
a=1
b=1
c=a+b 
a=b //1
b=c //2
*/
int main() {
    int a=1,b=1,c;
    printf(" %d  %d ",a,b);

    int i=1;
    while(i<=5){
    c=a+b;
    a=b;
    b=c;
    printf(" %d ",c);
    i++;
}
    return 0;
}