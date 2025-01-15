#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int LeafNodes(Node* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr && root->right == nullptr) return 1;
    return LeafNodes(root->left) + LeafNodes(root->right);
}

int main() {
    vector<int> elements = {12, 7, 19, 5, 10, 15, 23, 3};
    Node* root = nullptr;

    for (int value : elements) {
        root = insert(root, value);
    }

    cout << "In-order: ";
    inOrder(root);
    cout << endl;

    int leafCount = LeafNodes(root);
    cout << "Leaf Nodes: " << leafCount << endl;

    return 0;
}
