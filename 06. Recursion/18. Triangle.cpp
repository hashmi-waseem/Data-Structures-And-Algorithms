//Ques. Print triangle using recursion.

#include<bits/stdc++.h>
using namespace std;
void print(int row, int col){
    if(row==0)
        return;
    if(col<row){
        cout<<"*";
        print(row,col+1);
    }
    else{
        cout<<endl;
        print(row-1,0);
    }
}
int main(){
    print(4,0);
}