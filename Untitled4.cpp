#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};


class bst
{
	private:
		Node *temp;
	public:
		Node *root;
		int number;
		bst();
//		~bst();
		void in_ord(Node *temp);
		void insert(Node *temp);
//		void del(Node *temp);
//		void delAll(Node *temp);
		void height(Node* r,int val);
		int getLeafCount(Node* node);
};


bst::bst()
{
	temp = root = NULL;
}
void bst:: in_ord(Node *temp)
{
	if (temp == NULL)
	{
		cout<<"Tree is empty"<<endl;
		return;
	}
	if (temp->left != NULL)
	{
		in_ord(temp->left);
	}
	cout<<temp->data<<" ";
	if (temp->right != NULL)
	{
		in_ord(temp->right);
	}
}


void bst::insert(Node *temp)
{
	
	if (root == NULL)
	{
		temp = new Node;
		temp->data = number;
		temp->right = NULL;
		temp->left = NULL;
		root = temp;
		return;
	}
	if (temp->data == number)
	{
		cout<<"given number already in  tree"<<endl;
		return;
	}
	if (temp->data > number)
	{
		if (temp->left != NULL)
		{
			insert(temp->left);
		}
		else
		{
			Node *temp2 = new Node;
			temp2->data = number;
			temp2->right = NULL;
			temp2->left = NULL;
			temp->left = temp2;
			return;
		}
	}
	if (temp->data < number)
	{
		if (temp->right != NULL)
		{
			insert(temp->right);
		}
		else
		{
			Node *temp2 = new Node;
			temp2->data = number;
			temp2->right = NULL;
			temp2->left = NULL;
			temp->right = temp2;
			return;
		}
	}

}
void bst::height(Node* r,int val)
{
	int h =0;
	if(r==NULL)
	{
		cout<<"bst is Empty "<<endl;
	}
	else
	{
		while(r->left!=NULL)
		{
			if(r->data==val)
			{
				cout<<h<<endl;
			}
			h++;
			height(r->left,10);
		}
	  while(r->right!=NULL)
	  {
	  	if(r->data==val)
	  	 {
	  		cout<<h<<endl;
		  }
		  h++;
		  height(r->right,10);
	  }
		
		
	}
}

//int bst::getLeafCount(Node* node)
//{
//    if(node == NULL)    
//        return 0;
//    if(node->left == NULL && node->right == NULL)
//        return 1;        
//    else
//        return getLeafCount(node->left)+
//            getLeafCount(node->right);
//}

int main()
{

	bst obj;
	obj.number = 10;
	obj.insert(obj.root);
	obj.number = 8;
	obj.insert(obj.root);
	obj.number = 6;
	obj.insert(obj.root);
	obj.number = 9;
	obj.insert(obj.root);
	obj.number = 15;
	obj.insert(obj.root);
	obj.number = 14;
	obj.insert(obj.root);
	obj.number = 20;
	obj.insert(obj.root);
    obj.in_ord(obj.root);
    obj.number=6;


    obj.height(obj.root,8);
//    obj.getLeafCount(obj.root);
    obj.in_ord(obj.root);
    cout<<endl;

	return 0;
}
