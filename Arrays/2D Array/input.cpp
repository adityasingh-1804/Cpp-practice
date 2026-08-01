#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the value of rows:";
    cin>> n;
    int m;
    cout<< " enter the value of colnm:";
    cin>> m;
    int arr[n][m];
   
    for(int i=0;i<n;i++){// rows
        for(int j=0;j<m;j++){//col
            cin>> arr[i][j];
            
    }
   
}
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<< arr[i][j]<< " ";
    }
    cout<< endl;
}
    
} 