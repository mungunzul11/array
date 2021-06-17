#include <iostream>

using namespace std;

int main (){
	int n,i,j,def[n],arr[n];
	
	cout<<"Enter the size:";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
       	cout<<arr[i]<<",";
		
	}
    cout<<endl;
		
	for(int i=0;i<n;i++){
		def[i]=arr[i];
	}
	cout<<"new arr:";
	for(int i=0;i<n;i++ ){
		cout<<def[i]<<",";
	}
	
		
	
	
	
	return 0;
}
