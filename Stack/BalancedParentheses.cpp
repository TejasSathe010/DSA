#include <iostream>
#include <stack>
using namespace std;

bool BalancedParentheses(string exp) {
    stack<char> stk;
    char top;

    for (int i = 0; i < exp.length(); i++) {
        if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[') {
            stk.push(exp[i]);
            continue;
        }

        if(stk.empty()) {
            return false;
        }

        switch(exp[i]) {
            case '}':
                top = stk.top();
                if(top == ')' || top == ']') {
                    return false;
                }
                break;
            case ')':
                top = stk.top();
                if(top == '}' || top == ']') {
                    return false;
                }
                break;
            case ']':
                top = stk.top();
                if(top == ')' || top == '}') {
                    return false;
                }
                break;
        }
    }
    return true;
}



int main() {
    string exp = "{([()])}";

    if(BalancedParentheses(exp)) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced";
    }
}
