#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.top();
}