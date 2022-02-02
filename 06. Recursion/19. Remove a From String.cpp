//Ques. Remove all a's from the string.

#include<bits/stdc++.h>
using namespace std;
string removea(string s, int size, string ans){
    if(size<=0)
        return "";
    char ch;
    if(s[size-1]!='a')
        ch=s[size-1];
    ans += removea(s,size-1, ans) + ch;
    return ans;
}
int main(){
    string s="waseem najeeb hashmi";
    string ans="";
    cout<<removea(s,s.size(),ans);
    
}