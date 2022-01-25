//Ques. Find power of 2 using recursion.

#include<bits/stdc++.h>
using namespace std;
int powerof2(int n){
    if(n==0)
        return 1;
   int small=powerof2(n-1);
   int big=2*small;
   return big;
}
int main(){
    int n;
    cin>>n;
    
    cout<<powerof2(n);
}