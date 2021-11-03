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
  
  Node* nodeExists(int data){
      Node* temp = NULL;
      Node* ptr = head;
      while(ptr != NULL){
          if(ptr->data == data){
              temp = ptr;
          }
          ptr = ptr->next;
      }
      return temp;
  }

  void appendNode(int data){
    if(nodeExists(data) != NULL){
        cout << "Key " << data << " already exists" << endl;
    }else{
        Node* newNode = createNewNode(data);
        if(head == NULL){
            head = newNode;
            cout << "Node Appended!! " << endl;
        }else{
            Node* ptr = head;
            while(ptr->next!=NULL){
                ptr = ptr->next;
            }
            ptr->next = newNode;
            cout << "Node Appended!! " << endl;
        }
    }
  }

  void printList(){
    Node* ptr = head;
    while(ptr != NULL){
      cout << ptr->data << " ";
      ptr = ptr->next;
    }
    cout << endl;
  }

};


int main(){
  LinkedList list;
  list.appendNode(5);
  list.appendNode(6);
  list.appendNode(7);
  list.appendNode(5);
  
  list.printList();
}