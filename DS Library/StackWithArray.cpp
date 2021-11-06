#include <iostream>
# define MAX 100
using namespace std;

class Stack{

    public:
    int stack[MAX];
    int top;

    Stack() {
        top = -1;
    }

    // Utility function
    int isEmpty() {
        if(top < 0)
            return 1;
        return 0;
    }

    int isFull() {
        if(top >= MAX-1)
            return 1;
        return 0;
    }

    void push(int x) {
        if(isFull()) {
            cout << "Stack overflow" << endl;
        }else{
            stack[++top] = x;
            cout << x << " pushed" << endl;
        }
    }

    int pop() {
        int data;
        if(isEmpty()) {
            cout << "Stack underflow" << endl;
        }else{
            data = stack[top];
            // cout << "Item poped" << endl;
            top--;
        }
        return data;
    }

    int peek() {
        return stack[top];
    }
};

int main() {
    Stack stk;
    stk.push(5);
    stk.push(4);
    stk.push(3);
    stk.push(2);
    stk.push(1);

    while(!stk.isEmpty()){
        cout << stk.peek() << "  ";
        stk.pop();
    }
}