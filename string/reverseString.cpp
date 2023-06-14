#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    reverse(input.begin(),input.end());
    input.insert(input.end(), ' ');

    int n = input.length();
    int j = 0;

    for(int i = 0; i<n; i++){
        if(input[i]==' '){
            reverse(input.begin()+j,input.begin()+i);
            j = i + 1;
        }
    }
    input.pop_back();
    return input;
}


int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout<<ans<<endl;
}