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
    Node* head;

    LinkedList(){
        head = NULL;
    }

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
        }
    }

    void insertAtTheEnd(int data){
        Node* temp = createNewNode(data);
        Node* end = head;
        while(end -> next != NULL){
            end = end -> next;
        }
        end -> next = temp;
    }

    void printLinkedList(){
        Node* temp = head;
        while(temp != NULL){
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

    list.insertAtTheEnd(1);
    list.insertAtTheEnd(2);
    list.insertAtTheEnd(3);
    list.insertAtTheEnd(4);

    list.printLinkedList();
}
