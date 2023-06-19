#include <bits/stdc++.h>
using namespace std;

void spiralPrint(vector<vector<int>> matrix,int rowcount,int colcount)
{
    int i, currow=0,curcol=0;
    rowcount--;
    colcount--;

        if(colcount==0){
            for(i = currow;i<=rowcount;i++){
                cout<<matrix[i][colcount]<<" ";
            }
        }
        else{

        while(currow<=rowcount && curcol<= curcol){

            for(i = curcol;i<=colcount;i++){
                cout<<matrix[currow][i]<<" ";
            }
            currow++;

            for(i = currow;i<=rowcount;i++){
                cout<<"choa";
                cout<<matrix[i][colcount]<<" ";
            }
            colcount--;

            if(currow<=rowcount){

            for(i = colcount;i>=curcol;i--){
                cout<<matrix[rowcount][i]<<" ";
            }
            rowcount--;
            }

            if(curcol<=colcount){

            for(i = rowcount;i>=currow;i--){
                cout<<matrix[i][curcol]<<" ";
            }
            curcol++;
            }
        }
        }
    
}

int main(){
    // vector<vector<int>> matrix = {{1},{20},{30},{-10}};
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
vector<vector<int>> matrix ={{4827, 32391},
                            {-3902, 292},
                            {17421 ,-19718},
                            {5447, 14771},
                            {1869, -25667}};
                            
    spiralPrint(matrix,matrix.size(),matrix[0].size());
    return 0;
}


