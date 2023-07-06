#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++ ){
            if(arr[j]>arr[j + 1]){
                swap(arr[j],arr[ j + 1 ]);
            }
        }
    }

    // printing array
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {6,3,0,5};
    bubbleSort(arr,arr.size());
    return 0;
}