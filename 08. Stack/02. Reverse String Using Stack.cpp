#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="waseem";
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }
    string rev="";
    for(int i=0; i<s.size(); i++){
        char c=st.top();
        st.pop();
        rev+=c;
    }
    cout<<s<<endl;
    cout<<rev;
}