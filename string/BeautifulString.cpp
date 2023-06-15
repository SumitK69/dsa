#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
    int n = str.length();
    int optcount= 0;
    for(int i = 1; i < n; i++){
        if(str[i-1]==str[i]){
            str[i] = str[i-2];
            optcount++;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<str[i]<<" ";
    }
    cout<<"optcount:"<<optcount;
}

int main(){
    makeBeautiful("01010010101");
    return 0;
}