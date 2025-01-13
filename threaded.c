#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
    int isThreaded;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->isThreaded = 0;
    return newNode;
}

struct Node* createThreaded(struct Node* root) {
    if (root == NULL)
        return NULL;

    if (root->left != NULL)
        root->left = createThreaded(root->left);

    if (root->right != NULL)
        root->right = createThreaded(root->right);

    if (root->left == NULL && root->right != NULL) {
        struct Node* temp = root->right;
        while (temp->left != NULL)
            temp = temp->left;

        root->isThreaded = 1;
        root->right = temp;
    }

    return root;
}

struct Node* leftmost(struct Node* root) {
    while (root != NULL && root->left != NULL)
        root = root->left;
    return root;
}

void inorderTraversal(struct Node* root) {
    struct Node* current = leftmost(root);
    while (current != NULL) {
        printf("%d ", current->data);

        if (current->isThreaded)
            current = current->right;
        else
            current = leftmost(current->right);
    }
}

int main() {
    struct Node* root = createNode(6);
    root->left = createNode(3);
    root->right = createNode(8);
    root->left->left = createNode(1);
    root->left->right = createNode(5);
    root->right->left = createNode(7);
    root->right->right = createNode(11);

    root = createThreaded(root);

    printf("In-order Traversal of Threaded Binary Tree:\n");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
