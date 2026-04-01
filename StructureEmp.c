#include <stdio.h> // stdio :standard input output

struct Employee{
    int emp_id;
    char emp_name[100];
    char emp_department[100];
};

int main() {
    struct Employee e1={123,"gopal","IT"};
    printf("\nid is %d\n",e1.emp_id);
    printf("\n name is %s\n",e1.emp_name);
    printf("\n department is %s\n",e1.emp_department);

    return 0;
}