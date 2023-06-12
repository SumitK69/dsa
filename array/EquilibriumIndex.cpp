#include <bits/stdc++.h> 
using namespace std;

int findEquilibriumIndex(vector<int> &arr) {
    int n = arr.size();
    int i;
    int sum = 0,leftSum = 0;
    for(i = 0; i<n;i++)
        sum += arr[i];
    
    for(i = 0; i<n; i++){
        sum -= arr[i];
        if(leftSum == sum){
            return i;
        }
        leftSum += arr[i];
    }    
    return -1;

}



int main(){
    vector<int> arr = {1,7,3,6,5,6};
    cout<< findEquilibriumIndex(arr);
    return 0;
}