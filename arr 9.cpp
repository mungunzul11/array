#include <iostream>

using namespace std;

int main (){
	int  u, h, t;
	cout<<"Toon husnegtiin urtiig oruulna uu:";
	cin>>u;
	cout<<"Ta hed deh husnegtend too oruulah we : ";
	cin>>h;
	cout<<"Ta hediin too oruulah we:";
	cin>>t;
	
	int arr[u]; 
	
	for(int i=0;i<u;i++){
		cin>>arr[i];		
	}
	cout<<endl;
	int count=0;
	while(arr[count]!='\0'){
		count++;
	}
	
	for(int i=count-1;i>=h-1;i--){
		arr[i+1]=arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	int arr[h-1]=t;
	for(int i=0;i<=u;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
