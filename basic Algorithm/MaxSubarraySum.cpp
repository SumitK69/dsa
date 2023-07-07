#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++) {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    if(max_so_far < 0){
        return 0;
    }
    return max_so_far;
}
int main(){
    int arr[] = {-7, -8, -16, -4, -8, -5, -7, -11, -10, -12, -4, -6, -4, -16, -10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n);
    return 0;
}