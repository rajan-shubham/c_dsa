#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to compare elements in the BST
int compare(struct Node* root, int key) {
    if (root == NULL) {
        return 0; // Element not found
    }

    if (key < root->data) {
        return compare(root->left, key);
    } else if (key > root->data) {
        return compare(root->right, key);
    }

    return 1; // Element found
}

int main() {
    struct Node* root = NULL;

    // Insert elements into the BST
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    int key = 60;
    if (compare(root, key)) {
        printf("%d is found in the BST.\n", key);
    } else {
        printf("%d is not found in the BST.\n", key);
    }

    key = 10;
    if (compare(root, key)) {
        printf("%d is found in the BST.\n", key);
    } else {
        printf("%d is not found in the BST.\n", key);
    }

    return 0;
}
