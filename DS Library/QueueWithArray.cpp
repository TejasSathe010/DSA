#include <iostream>
using namespace std;
#define MAX 100

class Queue {
    public:
    int queue[MAX];
    int front, back;

    Queue(){
        front = back = -1;
    }

    int isEmpty() {
        if(front == -1) {
            return 1;
        }
        return 0;
    }

    int isFull() {
        if(back >= MAX - 1) {
            return 1;
        }
        return 0;
    }

    void enqueue(int data) {
        if(isFull()) {
            cout << "Queue full!!!! \n";
        }else {
            if(front == -1){
                front = 0;
            }
            queue[++back] = data;
        }
    }

    void dequeue() {
        if(isEmpty()) {
            cout << "Queue empty!!!! \n";
        }
        if(front >= back) {
            front = back = -1;
        }
        int data = queue[front--];
        cout << data << " dequeued \n";
    }

    void display() {
        if(isEmpty()) {
            cout << "Empty queue!!!! \n";
        }else {
            cout << "Front: " <<  front << endl;
            cout << "Queue Items Are: ";
            for(int i = front; i <= back; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
            cout <<  "Back: " << back << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(1);
    q.enqueue(2);

    q.display();
}