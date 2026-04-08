#include <iostream> // stdio :standard input output
using namespace std;
/*
even odd
*/

void even_odd(int num){
    if(num%2==0){
        cout<<"even number";
    }else{
        cout<<"odd number";
    }
}
int main() {
    int num;
   cout<<"Enter number :";
    cin>>num;
    even_odd(num);

}