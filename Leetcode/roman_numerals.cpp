#include <iostream>

using namespace std;

class Solution {
public:

    int intValueOfRomans(char str){
        if(str=='I'){return 1;}
        else if(str=='V'){return 5;}
        else if(str=='X'){return 10;}
        else if(str=='L'){return 50;}
        else if(str=='C'){return 100;}
        else if(str=='D'){return 500;}
        else if(str=='M'){return 1000;}
        else{return 0;}
    }

    int romanToInt(string s) {
        int num=intValueOfRomans(s[0]);
        for(int i=1;i<s.length();i++){
            if(intValueOfRomans(s[i-1])>=intValueOfRomans(s[i])){
                num+=intValueOfRomans(s[i]);
            }
            else{
                num+=intValueOfRomans(s[i])-2*intValueOfRomans(s[i-1]);
            }
        }
    }
};

int main() {
    
    return 0;
}