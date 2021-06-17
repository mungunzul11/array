#include <iostream>

using namespace std;

int main (){
	int s;
	cout<<"Enter the number:";
	cin>>s;
	
	int arr[s];
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	
	int count=0;
	for (int i=0; i<s; i++){
		if(arr[i]<0){
			count++;
		}
	}
	cout<<"All Negative:"<<count;
	
	 
	 
	
	return 0;
}

