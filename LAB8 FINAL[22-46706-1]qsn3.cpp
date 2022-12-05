//circular linked list with doubly


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
  public:
    Node* head;
  public:
    LinkedList(){
      head = NULL;
    }

    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"LINKED LIST : ";
        while(true) {
          cout<<temp->data<<" ";
          temp = temp->next;
          if(temp == head)
            break;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.\n";
      }
    }
};

int main() {
  LinkedList DList;

  Node* first = new Node();
  first->data = 46;
  DList.head = first;
  first->next = DList.head;

  Node* second = new Node();
  second->data = 47;
  first->next = second;
  second->next = DList.head;

  Node* third = new Node();
  third->data = 48;
  second->next = third;
  third->next = DList.head;

  DList.PrintList();
  return 0;
}
