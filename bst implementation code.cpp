#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node *right;
    Node(int data){
        this->data=data;
        left= right=NULL;
    }
};

class BinarySearchTree{
    public:
    Node* root;
    BinarySearchTree(){
        root= NULL;
    }
    ~BinarySearchTree()
    {
        delete root;
    }
    Node* insert(Node* root, int val);
    Node* deleteNode(Node* r, int val);
    void inOrderTraversal(Node* root);      //smallest to largest 
//    void preOrderTraversal(Node* root);
//    void postOrderTraversal(Node* root);
   
};


Node* BinarySearchTree::insert(Node* r, int val){
   
    if(r==NULL){
        Node *t= new Node(val);
        if (r==root)
            root=r=t;
        else
            r=t;    
        return r;
    }
    else if (r->data==val){
        cout<<"Duplicate Record: "<< val<<endl;
        return r;
    }
    else if(val < r->data){
        r->left= insert(r->left, val);
    }
    else if (val> r->data)
    {
        r->right= insert(r->right, val);
    }
}
void BinarySearchTree::inOrderTraversal(Node* r){
   
    if (r==NULL)
        return;
    inOrderTraversal(r->left);
    cout<<" "<<r->data <<" ->";
    inOrderTraversal(r->right);
}
Node* minValueNode(struct Node* Node)
{
    struct Node* current = Node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
void inorder(struct Node* root)
{
    if (root != NULL) {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
    }
}
Node* BinarySearchTree :: deleteNode(Node* r, int val) {
	// base case
    if (root == NULL)
        return root;
    if (val < root->data)
        root->left = deleteNode(root->left, val);

    else if (val > root->data)
        root->right = deleteNode(root->right, val);
 
    else {
    
        if (root->left==NULL and root->right==NULL)     // node has no child/ empty 
            return NULL;
       
      
        else if (root->left == NULL) {
            struct Node* temp = root->right;    
            delete(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            delete (root);
            return temp;
        }
 
      
        struct Node* temp = minValueNode(root->right);

        root->data = temp->data;
    		 
        root->right = deleteNode(root->right, temp->data);

}
return root; 
}
int main ()
{
	struct node* root = NULL;
BinarySearchTree tree;

tree.insert(tree.root, 10);
tree.insert(tree.root, 8);
tree.insert(tree.root, 6);
tree.insert(tree.root, 9);
tree.insert(tree.root, 15);
tree.insert(tree.root, 13);
tree.insert(tree.root, 20);
cout << "Inorder traversal of the given tree \n";
    inorder(tree.root);
    
    cout << "\n Here we Delete \n  6 \n";
    tree.deleteNode(tree.root, 6);
    
    cout << "Inorder traversal now  \n";
    inorder(tree.root);

return 0;
}
