// #include<iostream>
// using namespace std;

// void printarr(int arr[], int size) {
// for (int i = 0; i < size; i++) {
//     cout << arr[i] << " \t";
// }
// }
// int main (){
//     int arr[] = {1, 2, 3, 4, 5};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     printarr( arr, length );   
//     return 0;    
// }






#include <iostream>
using namespace std;

int find(int arr[], int n, int value){

    for (int i = 0; i < n; i++) {
        if(arr[i]==value){
            return i;
        }
    }
    return -1;}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout<<"Index of 4 is: "<<find(arr, length, 4)<<endl;
    return 0;
}
    



