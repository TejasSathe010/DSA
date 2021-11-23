#include <iostream>
using namespace std;

string moveXtoEnd(string str) {
    
    if(str.length() == 0) return "";
    char ch = str[0];
    string ans = moveXtoEnd(str.substr(1));
    if(ch == 'x') {
        return ans+ch;
    }
    return ch+ans;
}

int main() {
    string str = "advcxargcaxgex";
    string Xmoved = moveXtoEnd(str);
    cout << Xmoved;
}