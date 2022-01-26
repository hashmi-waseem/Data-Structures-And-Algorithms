//Ques. Check if string is palindrome.

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int i, int j){
    if(i>j)
        return 1;
    if(s[i]!=s[j]){
       return 0;
    }
    else
        return isPalindrome(s,i+1,j-1);
}
int main(){
    string s="madam";
    cout<<isPalindrome(s,0,s.size()-1);
    return 0;
}