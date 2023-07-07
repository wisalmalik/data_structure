#include<iostream>
using namespace std;


int main(){
    int arr[4]={2,7,11,15};
    int a;
	int b;
    cout<<"First Index ";
	cin>>a;
    cout<<"Second: ";
	cin>>b;
    int SUM=arr[a]+arr[b];
	cout<<SUM<<endl;

    return 0;
}