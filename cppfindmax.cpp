#include <iostream> // stdio :standard input output
using namespace std;

/*
take 5 numbers from user
pass all value in  function and find max number
1 2 4 5 3
*/
int find_max(int arr[5],int size){
    int max=arr[0];//1
    for(int i=1;i<size;i++){
        if (max<arr[i]){ //5<3
            max=arr[i];//max=5
        }
    }
    return max;
}
int main() {
 int arr[5];
 int max=0;
 for(int i=0;i<5;i++){
    cout<<"enter a number :";
    cin>>arr[i]; // arr[0]=1,arr[1]=2,arr[2]=4,arr[3]=5,arr[4]=3
  max=  find_max(arr,5);
  
 }
cout<<max;
}