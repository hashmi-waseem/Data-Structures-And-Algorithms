//Ques. Find sum of digits of number n using recursion

#include<bits/stdc++.h>
using namespace std;
int sumofn(int n){
    int ans=0;
    if(n<=9)
        return n;
    return sumofn(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;
    cout<<sumofn(n);
}