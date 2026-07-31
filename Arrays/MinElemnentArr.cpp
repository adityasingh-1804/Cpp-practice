#include<iostream>
using namespace std;
int main(){
    int arr[]={ 3, 4, 6 ,53, 67, 88, 92,5};
    int min=arr[0];
    int n= sizeof(arr)/4;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
      
    }
      cout<< min;



}