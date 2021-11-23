#include <iostream>
using namespace std;

string removeDupli(string str) {
    
    if(str.length() == 0) return "";
    char ch = str[0];
    string ans = removeDupli(str.substr(1));
    if(ch == ans[0]) {
        return ans;
    }
    return ch+ans;
}

int main() {
    string str = "aaaaabbbbbcccdd";
    string withoutDupli = removeDupli(str);
    cout << withoutDupli;
}