#include <iostream> // stdio :standard input output
using namespace std;
int main() {
   string str;
   cout<<"Enter String value :";
   cin>>str;

   for(int i=str.length()-1;i>=0;i-- ){
    cout<<str[i];
   }

}