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

        void count_leaf(node * temp)
            {
                //cout << temp->data << endl;
                if (temp->left != NULL)
                    count_leaf(temp->left);
                        
                if(temp -> left == NULL && temp -> right == NULL)
                	count++;

                if (temp->right != NULL)
                    count_leaf(temp->right);
                    
                    return;
                
        }
int height(node *root)
    {
        if (root == NULL)
            return -1;
        else
        {
            int lheight = height(root->left);
            int rheight = height(root->right);
            if (lheight > rheight)
                return (lheight + 1);
            else
                return (rheight + 1);
        }
    }
    void get_floor(int key)
    {
        node* c = root;
        int floor = -1;
        while(c!=NULL)
        {
            if(c->data==key)
            {
                floor = c->data;
                break;
            }
            else if(key<c->data)
            {
                c=c->left;
            }
            else if(key>c->data)
            {
                floor = c->data;
                c=c->right;
            }
        }
        cout<<floor<<endl;
    }
    void inorder( node *r)
{
    if(r != NULL)
    {
        inorder(r->left);
        cout<<r -> data<<" ";
        inorder(r -> right);
    }
    return;

}

void merge(node *root1, node *root2){

    if(root2 != NULL){ //inserts nodes from the other bst in inorder fashion
        merge(root1, root2 -> left);
        insert(root1,root2 ->data
		);
        merge(root1, root2 -> right);
    }
    return ;


}

    void ceil(int key)
    {
        node* c = root;
        int ceil = -1;
        while(c!=NULL)
        {
            if(c->data==key)
            {
                ceil = c->data;
                break;
            }
            else if(key<c->data)
            {
                ceil = c->data;
                c=c->left;
            }
            else if(key>c->data)
            {
                c=c->right;
            }
        }
        cout<<ceil<<endl;
    }
        
    };


 int main (){
        tree t1,t2;
        
        t1.insert(8 , t1.root);
        t1.insert(6 ,t1.root);
        t1.insert(7, t1.root);
        t1.insert(5,t1.root);
        t1.insert(10 , t1.root);
        t1.insert(11 , t1.root);
        t1.insert (9 , t1.root);
        t1.count_leaf(t1.root);
        cout<<"leaf nodes are: ";
        cout<<t1.count<<endl;
 
		cout<<"The height of the given binary search tree is "<<t1.height(t1.root); 
//		t1.ceil(5); 
//		cout<<t1.ceil(5)<<endl;

    t2.insert(t2.root,25);
    t2.insert(t2.root,26);
    t2.insert(t2.root,24);
    t2.insert(t2.root,23);

    cout<<"the second bst: \n";

    t2.inorder(t2.root);

    cout<<"After merging:\n";
    t1.merge(t1.root,t2.root);
    t1.inorder(t1.root);
    }
