#include <stdio.h> // stdio :standard input output
/*
Array:it is a collection of data of similar data*/
int main() {
//     //Student marks of 5 subjects
//    int a[5]={55,45,47,65,74},total=0;
//    for(int i=0;i<5;i++){
//     //subject 1 : marks 55
//     printf("\nsubject %d : marks %d\n",i+1,a[i]);
//     total=total+a[i];
//    }
//    printf("\ntotal %d
//     ",total);

int temp[7]={23,34,33,40,38,39,41};

for (int i=0;i<7;i++){
    //Day 1 : Temp 23
    printf("\nDay %d : Temp %d\n",i+1,temp[i]);
}
int arr[5];
int size=sizeof(arr)/sizeof(arr[0]);
printf("\nsize of array is %d\n",size);


// score [100,123,178,230]
//Player 1 : Score 100


    return 0;
}