#include <iostream>

using namespace std;

int main (){
	int s;
	cout<<"Enter the size: ";
	cin>>s;
	
	int num[s];
	
	for(int i=0; i<s; i++){
		cin>>num[i];
		
	}
	
	for(int i=0;i<s;i++){
		cout<<num[i]<<",";
	}
	
	return 0;
}
