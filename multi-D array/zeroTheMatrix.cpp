#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix){
    for(int i = 0; i<matrix.size();i++){
        for(int j = 0; j<matrix[i].size();j++){
            if(matrix[i][j] == 0){
                // column
                for(int s = 0; s<matrix.size();s++){
                    if(matrix[s][j]!=0){
                        matrix[s][j]=-1;
                    }
                }
                //row
                for(int k = 0; k<matrix[i].size();k++){
                    if(matrix[i][k]!=0){
                        matrix[i][k]=-1;
                    }
                }
            }
        }
    }

    //! converting -1 to 0
     for(int i = 0; i<matrix.size();i++){
        for(int j = 0; j<matrix[i].size();j++){
            if(matrix[i][j]== -1){
                matrix[i][j] = 0;
            }
        }
     }

    //!display
    for(int i = 0; i<matrix.size();i++){
        for(int j = 0; j<matrix[i].size();j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}




int main(){
    vector<vector<int>> arr = {{1,0},{2,7},{3,0},{4,8}};
    setZeros(arr);
    return 0;   
}