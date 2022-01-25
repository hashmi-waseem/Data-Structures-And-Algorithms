//Ques. Reverse a number using recursion

#include<bits/stdc++.h>
using namespace std;
int ans=0;
int reversedigit(int n){
    if(n==0)
        return 0;
    ans=ans*10 + n%10;
    reversedigit(n/10);
   return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<reversedigit(n);
}