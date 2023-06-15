#include <bits/stdc++.h> 
using namespace std;

int minimumParentheses(string pattern){
    int bal = 0;
    int ans = 0;
    int n = pattern.length();

    for(int i = 0; i < n; i++){
        if(pattern[i] == '(' ){
           bal += 1;
        }
        else 
            bal -= 1;
        
        if(bal == -1){
            bal += 1;
            ans += 1;
        }
    }
    return bal + ans;
}


int main(){
    string pattern = ")((()";
    
    cout<< minimumParentheses(pattern);
    return 0;
}