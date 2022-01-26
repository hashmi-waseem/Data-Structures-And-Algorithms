//Ques. Reverse String using recursion.


#include<bits/stdc++.h>
using namespace std;
string reverse(string s, int size){
    if(size<=0)
        return "";
    return s[size-1]+reverse(s,size-1);   
}
int main(){
    string s="Waseem";
    cout<<"After reversing  "<<reverse(s,s.size());
}