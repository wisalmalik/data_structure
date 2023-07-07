#include<iostream>
using namespace std;

class Stack
{
	private:
	    int top;    //head
    
    public:
    int array[5];   //Maximum size of Stack is 5
    
    
    //construtor
    Stack()
	{
	top = -1;
	}
    
    void push(int x);
    int pop();
    void peek();
    void isEmpty();
    void Display();

};


void Stack::push(int x)
{
    if(top >= 5)
    {
        cout << "Stack Overflow \n";
    }
    else
    {
        array[++top] = x;
        cout << "Pushed "<<x<<"\n";
    }
}
int Stack::pop()
{
    if(top == -1)
    {
        cout << "Stack Underflow \n";
        return 0;
    }
    else
    {
        int d = array[top--];
        return d;
    }
}
void Stack::peek()
{
    if(top == -1)
    {
        cout << "Stack empty \n";
        return ;
    }
    else
    {
        cout<<array[top]<<endl;
        return;
    }
}

void Stack::isEmpty()
{
    if(top ==-1)
    {
        cout << "Stack empty \n";
    }
    else
    {
        cout << "Stack not empty \n";
    }
}

void Stack::Display()
{
    for(int i=top ;i>=0 ;i--)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main() {

    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    s.Display();
    
    s.pop();
   s.Display();
}
