//Ques. Print the string name of the entered digits.

#include<bits/stdc++.h>
using namespace std;
void calldigit(string arr[], int n){
    if(n==0)
        return;
    int digit=n%10;
    n/=10;
    calldigit(arr,n);
    cout<<arr[digit]<<"  ";
}
int main(){
    int n;
    cin>>n;
    string arr[]={"zero","one","two","three","four", "five", "six", "seven", "eight", "nine"};
    calldigit(arr,n);
}