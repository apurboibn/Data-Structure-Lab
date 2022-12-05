#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
  private:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }


    void push_front(int newElement) {
      Node* newNode = new Node();
      newNode->data = newElement;
      newNode->next = NULL;
      newNode->prev = NULL;
      if(head == NULL) {
        head = newNode;
      } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
      }
    }


    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"LINKED LIST : ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }
};

int main() {
  LinkedList DList;


  DList.push_front(46);
  DList.push_front(47);
  DList.push_front(48);
  DList.push_front(49);
  DList.push_front(50);
  DList.PrintList();

  return 0;
}
