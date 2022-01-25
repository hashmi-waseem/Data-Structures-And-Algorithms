//Ques. Print number from n to 1 using recursion.

#include<bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==0)
        return;
   
   cout<<n<<endl;
   count(n-1);
}
int main(){
    int n;
    cin>>n;
    
    count(n);
}