#include <iostream>

using namespace std;
int main (){
	int s;
	cout<<"Enter the size:";
	cin>>s;
	
	int arr[s];
	
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<s;i++){
		sum+=arr[i];}
		cout<<"Total:"<<sum;
	
	
	return 0;
	
}
