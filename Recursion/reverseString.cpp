#include <iostream>
using namespace std;

void reverseString(string name) {
    if(name.length() == 0) return;
    reverseString(name.substr(1));
    cout << name[0];
}


int main() {
    string name = "Tejas";
    reverseString(name);
}