#include <iostream>
using namespace std;
 
struct node
{
    int info;
    node* next;
    node(int i)
    {
	    next= NULL;
		info = i;
       
    }
};
 
struct Queue {
    node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
 
    void enqueue(int x)
    {

        node* temp = new node(x);                 //creaTing node for LL
    
        if (rear == NULL) {                     //if its empty
            front = rear = temp;
            return;
        }
 
   
        rear->next = temp;
        rear = temp;
    }
 

    void dequeue()
    {
      
        if (front == NULL)               //incase queue is empty
            return;

        node* temp = front;
        front = front->next;
 
    
        if (front == NULL)
            rear = NULL;
 
        delete (temp);
    }
    bool isempty()
    {
    if (front == NULL && rear == NULL)
	return true;
	
    else
    return false;
    }
//    bool isFull()
//	{
//    if(len = size ){
//    return true;
//    else 
//	return false;
//    }
    void displayqueue()
    {
    if (isempty())
    cout<<"Queue is empty\n";
    else
   {
    node *ptr = front;
    while( ptr !=NULL)
   {
   cout<<ptr->info<<" ";
   
   }
  }
}
};
 

int main()
{
 
    Queue Q;
    Q.enqueue(8);
    Q.enqueue(5);
    //Q.dequeue();

    Q.enqueue(2);
    Q.enqueue(13);
    Q.enqueue(12);
    //Q.dequeue();
    cout << "Front : " << (Q.front)->info << endl;
    cout << "Rear : " << (Q.rear)->info;
}
