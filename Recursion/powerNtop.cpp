#include <iostream>
using namespace std;

int pow(int n, int p) {
    if(p == 1) return n;
    return n * pow(n, p-1);
 }



int main() {
    int n, p;
    cin >> n >> p;

    int totalPower = pow(n, p);
    cout << totalPower << endl;
}