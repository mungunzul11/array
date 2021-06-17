#include <iostream>

using namespace std;

int main (){
	int n;
	cout<<"input number: ";
	cin>>n;
	for(int i=1; i<n+1; i=i+2){
		cout<<i<<",";
	}
	return 0;
}
