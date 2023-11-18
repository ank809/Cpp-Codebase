#include <iostream>
struct Node
{
    int data;          // Data stored in the node
    Node *right_child; // Pointer to the right child node
    Node *left_child;  // Pointer to the left child node
};
// Function to create a new node
Node *new_node(int x)
{
    Node *temp = new Node;       // Create a new node pointer called 'temp'
    temp->data = x;              // Set the 'data' field of the new node to the provided value 'x'
    temp->left_child = nullptr;  // Initialize the left child pointer to nullptr
    temp->right_child = nullptr; // Initialize the right child pointer to nullptr
    return temp;                 // Return the newly created node
}
// Searching operation
Node *search(Node *root, int x)
{
    if (root == nullptr || root->data == x)  // If the current node is null or contains the target value 'x'
        return root;                         // Return the current node
    else if (x > root->data)                 // If 'x' is greater than the current node's data
        return search(root->right_child, x); // Recursively search the right subtree
    else                                     // If 'x' is smaller than the current node's data
        return search(root->left_child, x);  // Recursively search the left subtree
}
// Insertion
Node *insert(Node *root, int x)
{
    if (root == nullptr)                                  // If the current node is null
        return new_node(x);                               // Create a new node with data 'x' and return it
    else if (x > root->data)                              // If 'x' is greater than the current node's data
        root->right_child = insert(root->right_child, x); // Recursively insert 'x' into the right subtree
    else                                                  // If 'x' is smaller than the current node's data
        root->left_child = insert(root->left_child, x);   // Recursively insert 'x' into the left subtree
    return root;                                          // Return the current node
}
// Function to find the minimum value in a node
Node *find_minimum(Node *root)
{
    if (root == nullptr)                       // If the current node is null
        return nullptr;                        // Return nullptr
    else if (root->left_child != nullptr)      // If the left child of the current node is not null
        return find_minimum(root->left_child); // Recursively find the minimum value in the left subtree
    return root;                               // Return the current node
}
// Deletion
Node *delete_node(Node *root, int x)
{
    if (root == nullptr)                                       // If the current node is null
        return nullptr;                                        // Return nullptr
    if (x > root->data)                                        // If 'x' is greater than the current node's data
        root->right_child = delete_node(root->right_child, x); // Recursively delete 'x' from the right subtree;
    else if (x < root->data)                                   // If 'x' is smaller than the current node's data
        root->left_child = delete_node(root->left_child, x);   // Recursively delete 'x' from the left subtree
    else
    { // If 'x' matches the current node's data (found the node to delete)
        if (root->left_child == nullptr && root->right_child == nullptr)
        {
            delete root;    // Node has no children, delete it
            return nullptr; // Return nullptr
        }
        else if (root->left_child == nullptr || root->right_child == nullptr)
        {
            Node *temp;
            if (root->left_child == nullptr)
                temp = root->right_child;
            else
                temp = root->left_child;
            delete root; // Node has one child, replace it with the child
            return temp; // Return the child node
        }
        else
        {
            Node *temp = find_minimum(root->right_child);                   // Node has two children, find the minimum value in the right subtree
            root->data = temp->data;                                        // Copy the data from the minimum node to the current node
            root->right_child = delete_node(root->right_child, temp->data); // Recursively delete the minimum node from the right subtree
        }
    }
    return root; // Return the current node
}
// Inorder Traversal
void inorder(Node *root)
{
    if (root != nullptr)
    {
        inorder(root->left_child);             // Traverse the left subtree
        std::cout << " " << root->data << " "; // Print the data in the current node
        inorder(root->right_child);            // Traverse the right subtree
    }
}
void preorder(Node *root)
{
    if (root != NULL)
    {
        cout
    }
}
int main()
{
    Node *root = nullptr;
    root = insert(root, 20);
    insert(root, 5);
    insert(root, 1);
    insert(root, 15);
    insert(root, 9);
    insert(root, 7);
    insert(root, 12);
    insert(root, 30);
    insert(root, 25);
    insert(root, 40);
    insert(root, 45);
    insert(root, 42);
    inorder(root);
    std::cout << "\n";
    root = delete_node(root, 1);
    root = delete_node(root, 40);
    root = delete_node(root, 45);
    root = delete_node(root, 9);
    inorder(root);
    std::cout << "\n";
    return 0;
}