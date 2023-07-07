#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
};
node *head= new node();
void insertnodeatend(node*h, node*t, int val){
	while(h->next!=NULL)
	h=h->next;
	t->data=val;
	t->next=NULL;
	h->next=t;
	
}
void addnodebeforehead(node*h, node*t, int val){
	t->data= val;
	t->next=h;
	head=t;
}
void insertafterspecifickey(node*h, node*t, int val, int key ){
	while (h!=NULL){
		
		if (h-> data ==key){
			t->data=val;
			t->next=NULL;
			node*temp=h;
			t->next=h->next;
			h->next=t;
			break;
		}
		h=h->next;
	}
}
void insertbeforespecifickey(node*h, node*t, int val, int key ){
	node*ptr=NULL;
	while(h!=NULL){
		if(h->data==key){
			t->data=val;
			t->next=NULL;
			node*temp=h;
			t->next=h;
			ptr->next=t;
		}
		ptr=h;
		h=h->next;
	}
}
void printlist(node *h)
{
	while (h!=NULL){
	
	cout << h->data << "\t";
	h=h->next;
}
}
int main()
{
	head->data=1;
	head -> next-NULL;
	node *n1=new node();
	insertnodeatend(head , n1, 2);
	node *n2= new node();
	addnodebeforehead(head,n2 ,3 );
	node *n3=new node();

	//insertafterspecifickey (head, n3,99,2);
	insertbeforespecifickey (head, n3,99,2);
	printlist(head);
	return 0;
	
}
