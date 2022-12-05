// Tree traversal inorder

#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};

void inorderTraversal(struct Node* node)
{
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << "->";
  inorderTraversal(node->right);
}

int main() {
  struct Node* root = new Node(10);
  root->left = new Node(9);
  root->right = new Node(11);
  root->left->left = new Node(5);
  root->left->right = new Node(11);
  root->right->right=new Node(12);

  cout << "The Inorder traversal is : ";
  inorderTraversal(root);






  return 0;
}
