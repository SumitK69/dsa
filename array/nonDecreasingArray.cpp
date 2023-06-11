#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{
      int count = 0;
    for(int i = 1;i<n ; i++){
        if(arr[i]<arr[i-1]){                //* here we compare the i element to preceding element if i element is less than preceding element which is not a ideal case in non decreasing array.
            count++;                        //* we increment the count variable.
            if(count>1) return false;       //* if looping in for loop the previous if is true more than 1 time count will be greater than 1 which is contraint in this problem that only element can be modify is the whole array.
            if(i == 1 || arr[i-2] <= arr[i]){   //* if the i element is less than the i-1 but greater than the i-2 then the i-1 position will be assign the i element i.e. [17,59,30,78] -> [17,30,30,78] here i = 2.
                arr[i-1] = arr[i];
            }
            else arr[i] = arr[i-1];         //* if i element is less than i-1 and also less than i-2 then the i position will be assign the i-1 element.
        }
    }
    return true;                            //* if count stays 1 it will eventually loop through all element and also modify one of the element in the array and after for loop it will return true.
}



// brainstorming
// #include <bits/stdc++.h> 
// bool isPossible(int *arr, int n)
// {
//     int pos, count = 0;
//     for(int i = 0; i<= n-2;i++){
//         if(arr[i] > arr[i+1]){
//             count ++;
//             if(cout>1) return false;
//             else if (count == 1){
//                 arr[i] = arr[i+1];
//             }
//         }
//     }
//     return true;
// }


