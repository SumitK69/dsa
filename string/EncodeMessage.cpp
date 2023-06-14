#include <bits/stdc++.h> 

using namespace std;

string encode(string &message)
{
    int n = message.length();
    int count = 1;
    string msg;
    for(int i = 0; i<n; i++){
        if(message[i] == message[i+1]){
            count+= 1;
        }
        else{
            msg.append(message[i] + to_string(count));
            count = 1;
        }
    }
    return msg;
}


int main(){
    string s = "hello";
    cout<<encode(s);
    return 0;
}