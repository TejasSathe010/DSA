#include <iostream>
#include <limits.h>
using namespace std;

class StackNode {
    public:
    int data;
    StackNode* next;

    StackNode() {
        data = 0;
        next = NULL;
    }
};

int isEmpty(StackNode* root) {
        return !root;
    }

    void push(StackNode** root, int data) {
        StackNode* newNode = new StackNode();
        newNode->data = data;
        newNode->next = *root;
        *root = newNode;
        cout << data << " pushed!! \n";
    }

    int pop(StackNode** root) {
        if(isEmpty(*root)) {
            return INT_MIN;
        }
        StackNode* temp = *root;
        *root = (*root)->next;
        int popped = temp->data;
        delete temp;
        return popped;
    }

    int peek(StackNode* root) {
        if (isEmpty(root)) {
            return INT_MIN;
        }
        return root->data;
    }

int main() {
    
    StackNode* root = NULL;

    push(&root, 10);
    push(&root, 11);
    push(&root, 12);
    push(&root, 13);

    while(!isEmpty(root)) {
        cout << peek(root) << " ";
        pop(&root);
    }
    return 0;
}

