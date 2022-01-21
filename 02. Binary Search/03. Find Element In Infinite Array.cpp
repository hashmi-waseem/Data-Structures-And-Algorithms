//Ques. Find Element in Infinite Array?


#include <bits/stdc++.h>
using namespace std;
vector<int> findrange(vector<int>* arr,int target){
    vector<int> range;
    int s=0;
    int e=1;
    while(s<=e){
        if(target==arr[e])){
            break;
        }
        else{
            e=2*(e-s);
            s=e+1;
        }
    }
    range.push_back(s);
    range.push_back(e);
}

int binarySearch(vector<int>* arr,int s, int e,int target){
    int ans;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(target>arr[mid]){
            s=mid+1;
        }
        else if(target<arr[mid]){
            e=mid-1;
        }
        else{
            ans=mid;
            break;
        }
    }
    return ans;
}

int main() {
	vector<int> arr;
	for(int i=0; i<60000; i++){
	    arr.push_back(i);
	}
	int target;
	cout<<"Enter the target"<<endl;
	cin>>target;
	vector<int> v=findrange(&arr,target);
	int s=v[0];
	int e=v[1];
	int ans=binarySearch(&arr, s,e,target);
	cout<<"Element found at position:   "<<ans<<endl;
	return 0;
}