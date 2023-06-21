#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {
    int max_len = 0;
    for(int i = 0;i<arr.size();i++){
        int curr_sum = 0;
        for(int j = i;j<arr.size();j++){
            curr_sum += arr[j];
            if(curr_sum == 0){
                max_len = max(max_len, j - i + 1);

            } 
        }
    }
    return max_len;
}

int main(){
        vector<int> arr = {1,-1,2,-2};
        cout<<LongestSubsetWithZeroSum(arr);
        return 0;

}