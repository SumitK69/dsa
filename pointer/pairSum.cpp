#include <bits/stdc++.h> 
using namespace std;
int pairSum(vector<int> &arr, int n, int target){
	int count = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                count ++;
            }
        }   
    }
    if(count!= 0)
        return count;
    else
        return -1;
}

int main(){
    vector<int> arr = {1 ,3 ,5, 6};
    cout<<pairSum(arr,arr.size(),10);
}