#include<iostream>
using namespace std;

bool ispow3(int n){
	if(n%3==0)
		return ispow3(n/3);
	if (n==1)
		return true;
	
	return false;
}
int main(){
	int n;
	cin>>n;
	cout <<ispow3(n)<<endl;
	cin>>n;
	cout <<ispow3(n)<<endl;
	cin>>n;
	cout <<ispow3(n)<<endl;

	return 0;
}
