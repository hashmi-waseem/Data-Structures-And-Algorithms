//Ques. Find square root of n.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int s=0;
    int e=n;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(n==mid*mid){
            cout<<mid;
            break;
        }
        else if(n>mid*mid){
            s=mid+1;
        }
        else
        e=mid-1;
    }
}