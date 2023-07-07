#include <iostream>


using namespace std;

    struct node 
            {
                int data;
                node * left;
                node * right;
            };
    struct parent
        {
            node * child;
            node * parent;
        };


class tree 
    {

    
        public:
            node *root  , *ptr1 , *ptr2;
            parent * p1;
            int hold;
            tree()
            {

                root = ptr1 = ptr2 =  NULL;
                p1 = new parent;
                p1->child = NULL;
                p1->parent = NULL;
            }

            
		void insert(int key , node *&temp)
			{
				
				if(temp == NULL)
					{
						
						temp = new node;
						temp->data = key;
						temp->left = temp->right = NULL;
						return;
					}
				if (key == temp->data)
					
					{
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


        
node*search(node*root,int val){
	if(root==NULL){
		cout<<root->data;
		return NULL;
	}
	else if(root->right!=NULL){
		root = search(root->right);
	}
	else if(root->left!=NULL){
		root=search(root->left);
	}
	else if(root->data == val){
		cout<<"val found";
	}
	
}



 
            void inorder( node *root){
            	
			      	
    		if(root != NULL){
        		inorder(root->left);
        		cout<<root->data<<"  ";
        		inorder(root->right);
    		}
		}
        void smallest( node *root){
        	
    		while(root != NULL && root->left != NULL){
    			
    		    root = root->left;
    		}
    cout<<"\nSmallest value is \n"<< root->data<<endl;
}
void largest( node *root){
	
    while (root != NULL && root->right != NULL){
        root = root->right;
    }
    cout<<"\nLargest value is "<<root->data<<endl;
}
            
    };


int main()

    {
        
        tree t1;
        parent * p1;
        
        t1.insert(10 , t1.root);
        t1.insert(8 ,t1.root);
        t1.insert(6, t1.root);
        t1.insert(9,t1.root);
        t1.insert(15 , t1.root);
        t1.insert(14 , t1.root);
        t1.insert (20 , t1.root);
        t1.inorder(t1.root);
        
//        t1.search(t1.root,9);

        cout << endl;
        
//        t1.inorder(t1.root);
        t1.smallest(t1.root);
        t1.largest(t1.root);
       
        
    }

