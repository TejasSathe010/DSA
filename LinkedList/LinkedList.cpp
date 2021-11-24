#include <iostream>
using namespace std;


class Node {
    public:
        int data;
        Node* next;

    Node() {
        data = 0;
        next = NULL;
    }
};

class LinkedList {
    public:
        Node* head;

    LinkedList() {
        head = NULL;
    }

    Node* createNewNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        return newNode;
    }

    void appendNode(int data) {
        Node* newNode = createNewNode(data);

        if(head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp-> next!= NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void prependNode(int data) {
        Node* newNode = createNewNode(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAtTheNthPos(int data, int pos) {
        Node* newNode = createNewNode(data);

        if(head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL && pos > 1) {
            temp = temp->next;
            pos--;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    bool searchNode(int key) {
        Node* temp = head;
        while(temp != NULL) {
            if(temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void deleteAtHead() {
        if(head == NULL) {
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete(temp);
    }

    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList ll;
    ll.appendNode(5);
    ll.appendNode(2);
    ll.appendNode(3);
    ll.appendNode(7);
    ll.prependNode(10);

    ll.insertAtTheNthPos(99, 99);

    ll.display();

    // cout << ll.searchNode(11) << endl;
}