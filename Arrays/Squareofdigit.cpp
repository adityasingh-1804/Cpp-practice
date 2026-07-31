#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the value of N:";
    cin>> n;
    int arr[n];
    //store squares
    for(int i=0;i< n;i++){
       arr[i]=(i+1)*(i+1);
    }
    //printing loop
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    }

    
   
   
 
