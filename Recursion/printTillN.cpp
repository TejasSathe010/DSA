#include <iostream>
using namespace std;

void print0toN(int n) {
    if (n == 0) return;
    print0toN(n-1);
    cout << n << " ";
    return;
}

void printNto0(int n) {
    if (n == 0) return;
    cout << n << " ";
    printNto0(n-1);
    return;
}

int main() {
    int n;
    cin >> n;

    printNto0(n);
    cout << endl;
    print0toN(n);
}