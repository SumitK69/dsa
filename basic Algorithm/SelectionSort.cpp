#include <bits/stdc++.h> 
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    int temp;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

     for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        }
}


int main(){
    vector<int> arr = {64,25,12,22,11};
    selectionSort(arr,arr.size());
    return 0;
}