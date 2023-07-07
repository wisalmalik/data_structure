#include <iostream>

using namespace std;

struct node 
{
    int data;
    node * left;
    node * right;
};

class tree 
    {

    
        public:
            node *root  , *ptr1 , *ptr2;
            int  count = 0;
            tree()
            {
                root = ptr1 = ptr2 =  NULL;
            }

            
		void insert(int key , node *&temp)
			{
				
				if(temp == NULL)
					{
						
						temp = new node;
						temp->data = key;
						temp->left = temp->right = NULL;
						if(root == NULL)
						root= temp;
						return;
					}
				if (key == temp->data)
					
					{
						cout << "no" << endl;
						return;
					}
				if(temp->data > key)
					{
						insert(key , temp->left);
					}
				if(temp->data < key)
					{
						insert(key , temp->right);
						
					}
			}

        void print(node * temp)
            {
                //cout << temp->data << endl;
                if (temp->left != NULL)
                    print(temp->left);
                        
                if(temp -> left == NULL && temp -> right == NULL)
                	count++;

                if (temp->right != NULL)
                    print(temp->right);
                    
                    return;
                
            }
            
void height(int val,node* root)
{
	int count_1 =0;
	if(root==NULL)
	{
		cout<<"bst is Empty "<<endl;
	}
	else
	{
		while(root->left!=NULL)
		{
			if(root->data==val)
			{
				cout<<count_1<<endl;
			}
			count_1++;
			height(10,root->left);
		}
	  while(root->right!=NULL)
	  {
	  	if(root->data==val)
	  	 {
	  		cout<<count_1<<endl;
		  }
		  count_1++;
		  height(10,root->right);
	  }
		
		
	}
}
        
    };


 int main (){
        tree t1;
        t1.insert(8 , t1.root);
        t1.insert(6 ,t1.root);
        t1.insert(7, t1.root);
        t1.insert(5,t1.root);
        t1.insert(10 , t1.root);
        t1.insert(11 , t1.root);
        t1.insert (9 , t1.root);
        t1.print(t1.root);
        cout<<"leaf nodes are: ";
        cout<<t1.count<<endl;
        t1.height(10,t1.root);
        
    }
