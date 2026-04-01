#include <stdio.h> // stdio :standard input output
/*
Structure : different type of data store in single
variable
*/
struct Student{
    int id;
    int marks;
};
int main() {
  struct Student s1; 
    s1.id=1;
    s1.marks=56;
    printf("\n id is %d\n",s1.id);
    printf("\n marks is %d\n",s1.marks);
   
    return 0;
}