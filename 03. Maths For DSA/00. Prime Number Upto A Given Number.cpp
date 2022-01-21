//Ques. Find Prime Number upto a given number n.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<bool> v(n+1,1);
    v[0]=v[1]=false;
    int size=v.size();
    for(int i=2; i*i<n; i++){
        if(v[i]){
            for(int j=2*i; j<=n; j=j+i){
                v[j]=0;
            }
        }
    }
    
    for(int i=0; i<size; i++){
        if(v[i]==1)
            cout<<i<<" ";
    }
}