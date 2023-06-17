#include <bits/stdc++.h> 
using namespace std;



int main(){
    vector<vector<int>> mat =  {{0,1,0},
                                {1,0,1},
                                {0,1,0}};
    int count = 0;
    for(int i = 0; i<mat.size();i++){
        for(int j = 0;j<mat[i].size();j++){
            if(mat[i][j] == 0){
                //! left
                if(mat[i][j-1] == 1){
                    count++;
                }
                //! right
                if(mat[i][j+1] == 1){
                    count++;
                }
                //! top
                if(i>0){
                    if(mat[i-1][j] == 1){
                        count++;
                    }
                }
                //! bottom
                if(i<mat.size()-1){
                    if(mat[i+1][j] == 1){
                        count++;
                    } 
                }

            }
        }
    }
    cout<<"count:"<<count;
    return 0;
}