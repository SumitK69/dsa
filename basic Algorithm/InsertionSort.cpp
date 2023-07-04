#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    int i ,j,key;
    for(int i = 1; i<n;i++){
        key = arr[i];
        j = i - 1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    cout<<"sorted arr:";
    for(int k = 0; k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    vector<int> arr = {1,4,5,2};
    insertionSort(arr.size(),arr);
    return 0;
}