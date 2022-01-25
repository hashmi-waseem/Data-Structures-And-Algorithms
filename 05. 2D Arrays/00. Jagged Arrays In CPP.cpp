//Ques. Create a jagged array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cin>>row;
    
    int** arr=new int*[row];
    int *cols=new int[row];
    
    for(int i=0; i<row; i++){
        int col;
        cin>>col;
        cols[i]=col;
        arr[i]=new int[col];
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<cols[i]; j++)
            cin>>arr[i][j];
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<cols[i]; j++)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }
    
    for(int i=0; i<row; i++){
        delete arr[i];
    }
    delete arr;
    delete cols;
}