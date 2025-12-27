#include<iostream>
using namespace std;


int main (){
    int arr[] = {1, 23, 33, 4, 5, 6, 7, 8, 9};
    int evenArr[10];
    int cie = 0;

    int oddArr[10];
    int cio = 0;

    for(int i=0; i<9; i++){
      if(arr[i]%2==0){
         evenArr[cie++] = arr[i];
      }
      else{
         oddArr[cio++]=arr[i];
      } 
   
    }

return 0;

}