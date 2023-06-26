#include <bits/stdc++.h> 
using namespace std;
vector<vector<string>> getGroupedAnagrams(vector<string> &inputStr, int n)
{
    vector<vector<string>> hope;
    unordered_map<string,vector<string>> store;

     for (int i = 0; i < inputStr.size(); i++)
    {
        string tempString(inputStr[i]);
       
        sort(tempString.begin(),tempString.end());
       
        store[tempString].push_back(inputStr[i]);
    }
  

    for (auto it:store)
    {
        vector<string> temp_vec(it.second);
        int size = temp_vec.size();
   
       
        for (int i = 0; i < size; i++)
            cout << temp_vec[i] << " ";
           
        cout << "\n";
    }
}

int main(){
    vector<string> inputStr = {"eat","tea","tan","ate","nat","bat"};
    // vector<string> inputStr = {"abab", "baba", "aabb", "abbc"};
    getGroupedAnagrams(inputStr,inputStr.size());
    

    return 0;
}