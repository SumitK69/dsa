#include <bits/stdc++.h>
using namespace std;


int firstMissingPositive(int arr[],int n){
    sort(arr,arr+n);
    int i = 0;

    while(arr[i]<1){
        i++;
    }
    int missingPositive = 1;
    for (int j = i; j<n;j++){
        if(missingPositive == arr[j])
            missingPositive ++;
        else if( missingPositive < arr[j])
            return missingPositive;
    }
    return missingPositive;
}

int main(){
    int arr[] = {-1,-2,0,-3,1,2,3,4,54,7,6,78,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<firstMissingPositive(arr,n);
    return 0;
}