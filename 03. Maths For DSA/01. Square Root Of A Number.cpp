//Ques. Find the square root of the number?

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    float ans;
    for(float i=0; i*i<=n; i+=0.01){
            ans=i;
    }
    cout<<ans;
}