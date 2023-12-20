/**
 * dfs traversal is of 3 types:
 *
 * 1. inorder: Left root right
 * 2. preorder: Root left right
 * 3. postorder: Left Right root
 */

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;

    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};

// preorder
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

// preorder iterative
void preorderIt(Node *root)
{

    if (root == NULL)
        return;

    stack<Node *> st;
    st.push(root);

    while (!st.empty())
    {
        root = st.top();
        st.pop();
        cout << root->val << " ";
        if (root->right != NULL)
            st.push(root->right);
        if (root->left != NULL)
            st.push(root->left);
    }
}

// inorder
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// inorder iterative
void inorderIt(Node *root)
{

    if (root == NULL)
        return;

    stack<Node *> st;

    st.push(root);
    while (root->left != NULL)
    {
        st.push(root->left);
        root = root->left;
    }

    while (!st.empty())
    {
        root = st.top();
        st.pop();
        cout << root->val << " ";

        if (root->right != NULL)
        {
            root = root->right;
            st.push(root);
            while (root->left != NULL)
            {
                st.push(root->left);
                root = root->left;
            }
        }
    }
}

// postorder
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

// postorder iterative
void postorderIt(Node *root)
{

    if (root == NULL)
        return;

    stack<Node *> st1;
    stack<int> st2;
    st1.push(root);

    while (!st1.empty())
    {
        root = st1.top();
        st2.push(root -> val);
        st1.pop();
        if(root -> left != NULL) st1.push(root -> left);
        if(root -> right != NULL) st1.push(root -> right);
    }

    while(!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
}

int main()
{

    // Binary tree
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(4);
    root->left->right->left = new Node(6);
    root->left->right->left->right = new Node(7);
    root->left->right->left->right->right = new Node(8);
    root->right = new Node(3);
    root->right->left = new Node(5);
    root->right->left->right = new Node(9);
    root->right->left->right->left = new Node(10);

    // preorder
    preorder(root);
    cout << endl;

    // inorder
    inorder(root);
    cout << endl;

    // postorder
    postorder(root);
    cout << endl;

    // preorderIt
    preorderIt(root);
    cout << endl;

    // inorderIt
    inorderIt(root);
    cout << endl;

    // postorderIt
    postorderIt(root);
    cout << endl;
}