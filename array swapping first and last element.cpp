#include<iostream>
using namespace std;
int main()
{
	int Arr[100],n,i,temp;
	cout<<"Enter number of elements you want to insert ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}
	temp=Arr[0];
	Arr[0]=Arr[n-1];
	Arr[n-1]=temp;
	cout<<"\nArray after swapping"<<endl;
	for(i=0;i<n;i++)
		cout<<Arr[i]<<" ";
	return 0;
}
