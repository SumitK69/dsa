#include <bits/stdc++.h> 
using namespace std;
int minElementsToRemove(vector<int> &arr)
{
	set<int> temp;
    for(int i = 0;i<arr.size();i++){
        temp.insert(arr[i]);
    }
    return arr.size() - temp.size() ;
}


int main(){
    vector<int> arr = {1,2,3,5,4,6,2,3};
    cout<<minElementsToRemove(arr);
    return 0;

}