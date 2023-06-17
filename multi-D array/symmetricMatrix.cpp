// #include <bits/stdc++.h> 
// using namespace std;

// bool isMatrixSymmetric(vector<vector<int>> matrix){

//     vector<vector<int>> transpose(matrix[0].size(),vector<int>(matrix.size()));

//     //! transposing matrix:

//     for(int i = 0;i<matrix.size();i++){
//         for(int j = 0;j<matrix[i].size();j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }

//     if(matrix == transpose)
//         return true;
//     else
//         return false;
    
// }

// int main(){
//     vector<vector<int>> arr = {{1,1,1},
//                                {1,1,1},
//                                {1,1,1}};
    
//     isMatrixSymmetric(arr);
//     return 0;
// }

//! above one is consuming much more time than the one below.


#include <bits/stdc++.h> 
using namespace std;

bool isMatrixSymmetric(vector<vector<int>> matrix){
    int count = 0;
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            if(matrix[i][j] == matrix[j][i]){
                count++;
            }
        }
    }
    if(count == matrix.size() * matrix[0].size())
        return true;
    else
        return false;
}

int main(){
    vector<vector<int>> arr = {{1,2,3},
                               {2,4,6},
                               {3,6,9}};
    
    cout<<isMatrixSymmetric(arr);
    return 0;
}

