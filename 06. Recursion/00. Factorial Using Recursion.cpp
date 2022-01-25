//Ques. Find factorial of n using recursion.

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    int small=factorial(n-1);
    int big=n*small;
    return big;
}
int main(){
   int n;
   cin>>n;
   cout<<factorial(n);
}