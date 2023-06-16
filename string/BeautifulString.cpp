#include<bits/stdc++.h>
using namespace std;

int beautifulString(string str){
  int op1 = 0, op2 = 0;
  int n = str.length();
  for(int i = 0;i<n;i++){
    if(i%2 == 0){
      if(str[i]!= '0')
        op1++;
    }
    if(i%2 != 0){
      if(str[i] != '1')
        op1++;
    }
  }
  for(int i = 0;i<n;i++){
    if(i%2 == 0){
      if(str[i]!= '1')
        op2++;
    }
    if(i%2 != 0){
      if(str[i] != '0')
        op2++;
    }
  }
  if(op2<op1)
    return op2;
  else
    return op1;
}

int main(){
  string str = "1101";
  cout<<beautifulString(str);
  return 0;
}