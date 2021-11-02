#include <iostream>

class Node{
    public:
        int data;
        Node* next;

    Node(){
        next = NULL;
    }
};

class LinkedList{
    Node* head = NULL;

    Node* createNewNode(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
    }
};

int main(){

}