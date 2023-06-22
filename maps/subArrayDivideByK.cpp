#include <bits/stdc++.h>
using namespace std;
int subArrayCount(vector<int> &arr, int k) {
    unordered_map<int,int> remMap;
    remMap[0] = 1;
    int count = 0;
    long sum = 0;
    for(int i =0; i<arr.size();i++){
        sum+= arr[i];

        int rem = (sum % k + k) %k;
        if(remMap.find(rem) != remMap.end()){
            count += remMap[rem];
            remMap[rem] += 1;
        }    
        else{
            remMap[rem] += 1;
        }
    }
    return count;
}


int main(){
        vector<int> arr = {5,0,2,3,1};
        int k = 5;
        cout<<subArrayCount(arr,k);
        
        return 0;

}