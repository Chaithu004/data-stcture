#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->data);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
}

int main() {
  struct node* root = (struct node*)malloc(sizeof(struct node));
  root->data = 1;
  root->left = (struct node*)malloc(sizeof(struct node));
  root->left->data = 2;
  root->right = (struct node*)malloc(sizeof(struct node));
  root->right->data = 3;
  root->left->left = NULL;
  root->left->right = NULL;
  root->right->left = NULL;
  root->right->right = NULL;

  printf("Inorder Traversal: ");
  inorderTraversal(root);

  printf("\nPreorder Traversal: ");
  preorderTraversal(root);

  printf("\nPostorder Traversal: ");
  postorderTraversal(root);

  return 0;
}