#include<bits/stdc++.h>
using namespace std;


int findSecondLargest(int n,vector<int> &arr){
    sort(arr.begin(),arr.end());    //sort array in asc order and store it in arr
    int secondLargest = -1;         // if all elements are equal the it should return -1 cause it will be the second largest element
   
    for(int i = n-2;i>=0;i--){
        if(arr[i] != arr[n-1]){     // comparing the second last item to last item in case of duplicate items present
            secondLargest = arr[i]; // assign the second largest item to the secondLargest variable 
            break;                  // break out of for loop
        }
    }
    return secondLargest;           // returns the second largest item from the for loop or the -1 which is also the second largest item
}


int main(){
    vector<int> arr = {3,4,76,23,87,65};
    int ans = findSecondLargest(arr.size(),arr);
    cout<< ans;

    return 0;
}
