#include <stdio.h>
#include <stdlib.h>

// Define the structure for each node in the BST
struct node {
    int key;
    struct node *left;
    struct node *right;
};

// Create a new node with the given key value
struct node *create_node(int key) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Insert a new node into the BST with the given key value
struct node *insert_node(struct node *root, int key) {
    // If the tree is empty, create a new root node
    if (root == NULL) {
        return create_node(key);
    }

    // Otherwise, recursively insert the new node into the appropriate subtree
    if (key < root->key) {
        root->left = insert_node(root->left, key);
    } else if (key > root->key) {
        root->right = insert_node(root->right, key);
    }

    return root;
}


// Perform an inorder traversal of the BST
void inorder_traversal(struct node *root) {
    if (root != NULL) {
        inorder_traversal(root->left);
        printf("%d ", root->key);
        inorder_traversal(root->right);
    }
}

// Perform a preorder traversal of the BST
void preorder_traversal(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

// Perform a postorder traversal of the BST
void postorder_traversal(struct node *root) {
    if (root != NULL) {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ", root->key);
    }
}

// Driver function to test the BST operations
int main() {
    // Create an empty BST
    struct node *root = NULL;

    // Insert some nodes into the BST
    root = insert_node(root, 50);
    insert_node(root, 30);
    insert_node(root, 20);
    insert_node(root, 40);
    insert_node(root, 70);
    insert_node(root, 60);
    insert_node(root, 80);

    // Display the BST traversals
    printf("Inorder traversal: ");
    inorder_traversal(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder_traversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder_traversal(root);
    printf("\n");

    return 0;
}

//Code by Steavo Babu