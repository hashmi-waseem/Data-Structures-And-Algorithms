//Ques. Check whether the string is palindrome.

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int size, string& str){
    if(size<=0)
        return 0;
    char ch=s[size-1];
    str+=ch;
    isPalindrome(s,size-1,str);
    if(s==str)
        return 1;
    return 0;
}

int main(){
    string s="madam";
    string str="";
    cout<<"is Palindrome:   "<<isPalindrome(s, s.size(), str);
}