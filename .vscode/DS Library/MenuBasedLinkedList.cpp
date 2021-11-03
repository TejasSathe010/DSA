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
  int size;
  
  LinkedList(){
    head = NULL;
    size = 0;
  }
  
  Node* createNewNode(int data){
    size++;
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
        cout << "Data " << data << " already exists" << endl;
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

  void prependNode(int data){
      if(nodeExists(data) != NULL){
        cout << "Data " << data << " already exists" << endl;
      }else{
          Node* newNode = createNewNode(data);
          if(head == NULL){
              head = newNode;
              cout << "Node Prepended!! " << endl;
          }else{
              newNode->next = head;
              head = newNode;
              cout << "Node Prepended!! " << endl;
          }
      }
  }

  void InsertAfter(int afterNum, int data){
      Node* after = nodeExists(afterNum);
      if(after == NULL){
          cout << "After Node is not found!! " << endl;
      }else{
          Node* newNode = createNewNode(data);
          newNode->next = after->next;
          after->next = newNode;
          cout << "Node Added After: " << after->data << endl;
      }
  }

  void InsertAtLoc(int loc, int data){
      Node* ptr = head;
      int pos = loc;
      if (loc < 1 || loc > size + 1)
        cout << "Invalid position!" << endl;
      else {
          while(loc--){
              if(loc==0){
                  Node* newNode = createNewNode(data);
                  newNode->next = ptr->next;
                  ptr->next = newNode;
                  cout << "Node Added At Position " << pos << endl;
              }else{
                  ptr = ptr->next;
              }
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

  cout << list.size << endl;
  list.InsertAtLoc(2, 9);


//   list.prependNode(9);
//   list.prependNode(7);
//   list.InsertAfter(9, 99);

  list.printList();
}