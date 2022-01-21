//Ques. Find ceiling of the given target number?

//Ceiling is closest value to the target (greater or equal to target element)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,20};
    float target;
    cin>>target;
    int s=0;
    int e=v.size()-1;
    int ans=INT_MIN;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        if(target>v[mid]){
            s=mid+1;
        }
        else if(target<v[mid]){
            e=mid-1;
        }
        else{
            ans=v[mid];
            break;
        }
    }
    if(ans<0 && s!=v.size())
        ans=v[s];
    cout<<ans;
}