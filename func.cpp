#include <iostream> // stdio :standard input output
#include <cmath>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
int main() {
   cout<<sqrt(16)<<endl;
   cout<<pow(2,3)<<endl;
   cout<<abs(-5)<<endl;
   string str="hello";
   cout<<"length is "<<str.length()<<endl;
   cout<<"substring is "<<str.substr(1,4)<<endl;
   cout<<isalpha('1')<<endl;
   cout<<isdigit('d')<<endl;
   cout<<(char)toupper('a')<<endl;
   cout<<max(23,12)<<endl;
   cout<<min(23,12)<<endl;
   int a=10,b=20;
   swap(a,b);
   cout<<"a="<<a<<endl;
   cout<<"b="<<b<<endl;
}