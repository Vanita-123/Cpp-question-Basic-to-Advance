#include <iostream>
#include <cctype>
using namespace std;
int main(){       
    string s = "Ac3$e3c&a";
   int start =0;
  int end=s.length()-1;
  while (start <end){
    if(!isalnum(s[start])){
        start ++ ; continue;
    }
        if(!isalnum(s[end])){
        end-- ; continue;
    }
    if(tolower(s[start]) != tolower(s[end])){
    cout << "Not a palindrom";
    return 0;
    }
    start++;
    end --;
  }
  cout << "Palindrom";
    return 0;
}