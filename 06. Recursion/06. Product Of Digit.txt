//Ques. Find product of digit using recursion.

#include<bits/stdc++.h>
using namespace std;
int prodofdigit(int n){
    if(n<=9)
        return n;
    return n%10 * prodofdigit(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<prodofdigit(n);
}