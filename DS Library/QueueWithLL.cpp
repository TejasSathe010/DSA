#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node() {
        next = NULL;
    }
};

class Queue {
    public:
    Node* front, *back;

    Queue() {
        front = NULL;
        back = NULL;
    }

    Node* createNewNode(int data) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

    void enqueue(int data) {
        Node* newNode = createNewNode(data);
        if(back == NULL) {
            cout << " Enqueued Data: " << data << endl;
            front = newNode;
            back = newNode;
        } else {
            cout << " Enqueued Data: " << data << endl;
            back->next = newNode;
            back = newNode;
        }
    }

    void dequeue() {
        if (front == NULL && back == NULL) {
            cout << " Queue is empty" << endl;
        } else {
            Node* temp = front;
            front = front->next;
            cout << " Dequeued Data: " << temp->data << endl;
            delete temp;
        }
        if (front == NULL)
            back = NULL;
    }

    void display() {
        Node* ptr = front;
        cout << "Data: ";
        while(ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(1);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();
}