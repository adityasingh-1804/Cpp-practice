#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the no or rows:";
    cin>> n;
    int m;
    cout<< "Enter the no of colunms:";
    cin>> m;
    int a[n][m];
    int b[n][m];
    //input in matrix for a matrix
    cout<< "give input for matrix a:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
        }
        
    }
    cout<<"Input for matrix b";
    //input for matrix b
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> b[i][j];
        }

    }
    // output matrix a
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<< a[i][j]<< " ";
        }
        cout<< endl;
    }
    //output for matrix b
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< b[i][j]<< " ";
        }
        cout<< endl;
    }
    int c[n][m];
   
    //input for martix c
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           c[i][j]=a[i][j]+b[i][j];
          
        }
       
    }
     cout<< "Sum of 2 Matrix";
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<< c[i][j]<< " ";
        }
        cout<< endl;
    }
}