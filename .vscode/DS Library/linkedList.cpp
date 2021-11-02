#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head = NULL;

    Node* createNewNode(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

    void insertInTheBeginning(int data){
        Node* temp = createNewNode(data);
        if(head == NULL){
            head = temp;
        } else {
            temp -> next = head;
            head = temp;
            cout << "Node Prepended" << endl;
        }
    }

    void printLinkedList(){
        Node* temp = head;
        while(temp->next != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main(){
    LinkedList list;
    list.insertInTheBeginning(5);
    list.insertInTheBeginning(6);
    list.insertInTheBeginning(7);
    list.insertInTheBeginning(8);
    list.insertInTheBeginning(9);

    list.printLinkedList();
}