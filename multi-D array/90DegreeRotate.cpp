#include <bits/stdc++.h> 
using namespace std;
void inplaceRotate(vector<vector<int>> &inputArray)
{
    vector<vector<int>> temp = inputArray;

    int t = inputArray.size();
    for(int i = 0;i< inputArray.size();i++){
        t--;
        for(int j = 0;j < inputArray.size(); j++){
            inputArray[i][j] = temp[j][t];

        }
    }

    
    //!DISPLAY MATRIX
    for(int i = 0;i<inputArray.size();i++){
        cout<<endl;
        for(int j = 0;j<inputArray[i].size();j++){
            cout<<inputArray[i][j]<<" ";
        }
    }

    

}



int main(){
     vector<vector<int>> arr = {{1,2,3},
                                {4,5,6},
                                {7,8,9}};
    
    inplaceRotate(arr);
    return 0;
}