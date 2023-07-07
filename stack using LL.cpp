#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

class Stack
{
	private:
		Node *top;
        
	public:
		Stack()
		{
		top=NULL;
		}
		void push(int x);
		int pop();
		void display();
		void peek();
        void isEmpty();
};

void Stack::push(int x)
{
	Node *t=new Node;
    
	if(t==NULL)
		cout<<"Stack is Full\n";
	else
	{
		t->data=x;
		t->next=top;
		top=t;
		cout<<x<<" is pushed"<<endl;
	}
}

int Stack::pop()
{
	int x=-1;
    
	if(top==NULL)
		cout<<"Stack is Empty\n";
	else
	{
		x=top->data;
		Node *t=top;
		top=top->next;
		delete t;
	}
	return x;
}

//void Stack :: isEmpty()
//{
//	if (top == -1)
//	return true;
//	else
//	return false;
//}

//void Stack :: peek()
//{
//	if (!isEmpty())
//        return top->data;
//    else
//        exit(1);
//}

void Stack::display()
{
	Node *p=top;
    
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;	
	}	
	cout<<endl;
}

int main()
{
	Stack s;
	
	s.push(11);
	s.push(12);
	s.push(13);
	s.push(14);
	s.push(15);
	
	s.display();
	
	cout<<s.pop()<<" is popped \n";
	
	s.display();
	
	return 0;
 }
