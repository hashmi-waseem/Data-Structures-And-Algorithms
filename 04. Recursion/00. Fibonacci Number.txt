//Ques. Find the nth Fibonacci number.

#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<2)
        return n;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    int x=fibo(n);
    cout<<x<<endl;
}