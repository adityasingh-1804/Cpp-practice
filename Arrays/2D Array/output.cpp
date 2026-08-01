#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    arr[0][0]=6;
    arr[0][1]=2;
    arr[0][2]=3;
    arr[1][0]=8;
    arr[1][1]=9;
    arr[1][2]=0;
    //output
    for(int i=0;i<2;i++){// rows
        for(int j=0;j<3;j++){//col
            cout<< arr[i][j]<< " ";
            
    }
    cout<< endl;
}
    
} 