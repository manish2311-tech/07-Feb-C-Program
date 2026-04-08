#include <iostream> // stdio :standard input output
using namespace std;
/*
calculator:
step 1: take input from user (2 numbers)
step 2: take opearator as input (+ - * / %)
step 3: calculate and give o/p
*/
int main() {
   int num1,num2;
   char op;

   cout<<"1.Addition"<<endl;
   cout<<"2.Substraction"<<endl;
   cout<<"3.Multiplication"<<endl;
   cout<<"4.Division"<<endl;
   cout<<"5.Modulo"<<endl;

   cout<<"enter first number:";
   cin>>num1;
   cout<<"enter second number:";
   cin>>num2;

   cout<<"enter opertor like (+ - * / % ):";
   cin>>op;

   switch(op){
    case '+':
    cout<<num1+num2;
    break;
    case '-':
    cout<<num1-num2;
    break;
    case '*':
    cout<<num1*num2;
    break;
    case '/':
    if (num1 !=0 && num2!=0){
        cout<<num1/num2;
    }else{
        cout<<"Error :Divide by zero!!!";
    }
    
    break;
    case '%':
    cout<<num1%num2;
    break;
    default:
    cout<<"invalid input";

   }

}