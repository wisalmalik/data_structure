#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int data )
	{
		this->data=data;
		left=right=NULL;
	}
};
class BinarySearchTree{
	public:
	Node*root;
	BinarySearchTree(){
		root=NULL;
		
	}
	~BinarySearchTree()
	{
		delete root;
	}
	Node* insert(Node* root, int val);
	void remove(Node* root, int val);
	void inOrderTraversal(Node* root);
	void preOrderTraversal(Node* root);
	void postOrderTraversal(Node* root);
};
int main (){
	BinarySearchTree tree;
	tree .insert(tree.root,8);
	tree .insert(tree.root,6);
	tree .insert(tree.root,10);
	tree .insert(tree.root,7);
	tree .insert(tree.root,9);
	cout << "left node ---- root Node-- Right Node"<< endl;
	tree.inOrderTraversal(tree.root);
	return 0;
}
Node* BinarySearchTree::insert( Node* r, int val){
	if (r==NULL){
		Node *t=new Node(val);
		if ( r ==root)
		root=r=t;
		else
		r=t;
		return r;

	}
	else if (r->data==val)
	{
		cout << "duplicate record : " << val <<endl;
		return r;
	}
	else if (val < r -> data){
	
	r->left = insert(r->left , val);
}
		
    else if (val > r -> data ){
	r-> right = insert (r-> right , val);
	}
}
void BinarySearchTree :: inOrderTraversal(Node*r ){
	if ( r ==NULL)
	return;
	inOrderTraversal ( r->left);
	cout << " " << r-> data << " -> ";
	inOrderTraversal(r->right); 
}
