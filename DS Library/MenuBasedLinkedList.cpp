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
  private:
  int size;

  public:
  Node* head;
  
  LinkedList(){
    head = NULL;
    size = 0;
  }
  
  // Utility function
  Node* createNewNode(int data){
    size++;
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
  }
  
  // Utility function
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

  // Utility function
  int getSize(){
    return size;
  }

  // Utility function
  bool isEmpty(){
    if(head == NULL){
      return true;
    }
    return false;
  }


  void appendNode(int data){
    if(nodeExists(data) != NULL){
        cout << "Data " << data << " already exists" << endl;
    }else{
        Node* newNode = createNewNode(data);
        if(isEmpty()){
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
          if(isEmpty()){
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

  void popFront(){
    if(head==NULL){
      cout << "List is Empty " << endl;
    }else{
      Node* temp = head;
      int data = temp->data;
      head = temp->next;
      size--;
      delete temp;
      cout << "Front Node deleted " << data << endl;
    }
  }

  void popBack(){
    if(head==NULL){
      cout << "List is Empty " << endl;
    }else{
      Node* ptr = head;
      while(ptr-> next-> next != NULL){
        ptr = ptr->next;
      }
      cout << "End Node deleted " << ptr->next->data << endl;
      ptr->next = NULL;
      size--;
      delete ptr->next;
    }
  }

  void popAtLoc(int loc){
      Node* ptr = head;
      int pos = loc;
      if (loc < 1 || loc > size + 1)
        cout << "Invalid position!" << endl;
      else {
          while(loc--){
              if(loc==1){
                  Node* nextNode = ptr->next;
                  ptr->next = nextNode->next;
                  cout << "Node Delete At Position " << pos <<" With data " << nextNode->data << endl;
                  size--;
                  delete nextNode;
              }else{
                  ptr = ptr->next;
              }
          }
      }
  }

  void isNodeExist(int data){
    if(nodeExists(data) != NULL){
      cout << "Node Exists " << data << endl;
    }else{
      cout << "Node is not exists " << data << endl;
    }
  }

  void reversedIterative(){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while(current != NULL){
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
    cout << "LinkedList reversed iteratively!! " << endl;
  }

  Node* reversedRecursive(Node* head){
    if(head == NULL || head->next == NULL){
      cout << "LinkedList reversed recursivly!! " << endl;
      return head;
    }
    Node *rest = reversedRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
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

  // cout << list.getSize() << endl;
  // list.InsertAtLoc(2, 9);


  // list.prependNode(9);
  // list.prependNode(7);
  // list.InsertAfter(9, 99);

  // list.printList();
  // list.popFront();
  // list.printList();

  // list.printList();
  // list.popBack();
  // list.printList();
  // list.popAtLoc(2);
  // cout << list.getSize() << endl;

  // list.isNodeExist(6);

  // list.printList();
  // list.reversedIterative();
  list.printList();

  list.head = list.reversedRecursive(list.head);
  list.printList();
}

// TODO: Add Reverse Function
// TODO: Add Menu
// TODO: Add Delete node based on data value