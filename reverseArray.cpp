#include <bits/stdc++.h> 
using namespace std;
void reverseArray(vector<int> &arr , int m)
{
    int num = arr.size();
    int i,j;
    for ( i =m+1,j = num-1; i < j; i++, j--)  
    {     
        int temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    for (i = 0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    reverseArray(arr,3);
    return 0;
}