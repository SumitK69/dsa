#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;                       // number of elements
    int arr[n];                     // array declare with n number of elements
    for (int i = 0; i < n; i++){    
        cin >> arr[i];              //accepting array elements
    }
    int k;                          // index number which we have to shift to left
    cin >> k;
    int p =1;                       // using p variable to loop through array and assign arr[0] to last 
    if(k>n){                        // checking if left shifting number is greater than the no. of elements.
        return -1;
    }
    while(p<=k){                    // using this loop to run the left shifting algo required number of times and to assign arr[0] element to the last postion in each iteration.
        int last = arr[0];
        for(int i = 0;i<n-1;i++){   // left shifting by assign next position element to the preceding index
            arr[i] =arr[i+1];
        }
        arr[n-1]=last;              // assigning the first element to the last index or position
        p++;
    }
     for (int i = 0; i < n; i++)    // printing the array
        cout << arr[i] << " ";
    return 0;
}