//LINKED LIST

#include <iostream>
using namespace std;

struct Node
{
  int item;
  struct Node* next;
};


struct Node* head = NULL;

void insertAtBeginning(int data)
{
  struct Node* new_node = new Node();

  new_node->item = data;
  new_node->next = head;
  head = new_node;
}

void insertAtEnd(int data)
{
  struct Node* new_node = new Node();
  struct Node* last = head;

  new_node->item = data;
  new_node->next = NULL;

  if (head == NULL)
  {
    head = new_node;
  }

  else
  {
      while (last->next != NULL)
      {
        last = last->next;
      }

      last->next = new_node;
  }
}

void insertAfter(struct Node* prev_node, int data)
{
  if (prev_node == NULL)
  {
    cout << "\nprevious node can not be null.";
  }

  else
  {
    struct Node* new_node = new Node();

    new_node->item = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
  }
}

void deleteNode(int key)
{
  struct Node *temp = head, *prev;

  if (temp != NULL && temp->item == key)
  {
    head = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
      return;
  }

  prev->next = temp->next;
  free(temp);
}

void printList(struct Node* node)
{
  while (node != NULL)
  {
    cout << node->item << " ";
    node = node->next;
  }
  cout << endl << endl;

}
void search(int x)
{
    Node*temp=head;
    while (temp!=NULL)
    {
        if(temp->item==x )
        {
            cout<<"Element found !";
            return;
        }
        temp=temp->next;

    }
    cout<<"Element Not found !"<<endl;
}
int main()
{
  insertAtBeginning(38);
  insertAtBeginning(37);
  insertAtBeginning(36);
  insertAtBeginning(35);
  insertAtBeginning(34);

  cout << "Linked list : ";
  printList(head);

  insertAtEnd(20);
  insertAtEnd(21);
  insertAtEnd(22);
  insertAtEnd(23);
  insertAtEnd(24);

  cout << "Linked list after adding element at the end : ";
  printList(head);

  insertAfter(head->next->next->next->next, 99);

  cout << "Linked list after inserting 99: ";
  printList(head);

  cout << "\nAfter deleting 38, 35 & 34: ";
  deleteNode(38);
  deleteNode(35);
  deleteNode(34);
  printList(head);

  cout<<"Element To Search = 99"<<endl;
   search(99);


  return 0;
}
