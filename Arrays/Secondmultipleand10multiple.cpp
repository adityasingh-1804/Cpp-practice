#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,5,7,9};
    cout<< " array without upadte";
    for(int i=0; i<5;i++){
        cout<< arr[i]<< " ";

    }
    // for updating array
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]=arr[i]+10;
        }
    }
        //loop for printing 
        cout<< endl;
        cout<< " updated array";
    for(int i=0;i<5;i++){
        cout<< arr[i]<< " ";

    }
    }    
    



