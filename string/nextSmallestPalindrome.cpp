#include <bits/stdc++.h> 
using namespace std;

string nextLargestPalindrome(string s, int len){

    string x = s; //string s in x for future comparison s = "1 2 3 2 1"

    for (int i = len/2; i < len; i++) {
        s[i] = s[len-i-1];          // 1st iteration: i = 2, s[2] = 3, s[5-2-1] = 3.
                                    // 2nd iteration: i = 3, s[3] = 2, s[5-3-1] = 2.
                                    // 3rd iteration: i = 4, s[4] = 1, s[5-4-1] = 1.
    }

    if(s > x){
        return s;
    }
    else{
        for (int i = (len-1)/2; i >= 0; i--) { // 1st iteration: i = 2
            if(x[i]!='9'){                     // 1st iteration: x[2] = 3
                x[i]++;                        // 1st iteration: x[2] = 4 then direct break from this for loop to second for loop.
                break;
            }else{
                x[i] = '0';
            }
        }
    }

    for (int i = len/2; i < len; i++) {         // 1st iteration: i = 2, x[2] = x[5-2-1] = 4.
        x[i] = x[len-i-1];                      // 2nd iteration: i = 3, x[3] = x[5-3-1] = 2.
                                                // 3rd iteration: i = 4, x[4] = x[5-4-1] = 1.
    }

    if(x[0] == '0'){        
        x+='1';
        x[0] = '1';
    }
    return x;
}


int main(){
    cout<<nextLargestPalindrome("12321",5);
    return 0;
}
