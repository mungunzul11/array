#include <iostream>
using namespace std;
int main (){
	
	int s;
	cout<<"Enter the number:";
	cin>>s;
	
	int arr[s];
	for(int i=0 ;i<s ;i++){
		cin>>arr[i];
	}
	
	int even=0, odd=0;
	for(int i=0;i<s;i++){
		if(arr[i]%2==0){
			even++;
			}
		else  {
			odd++;
			}
	}
	cout<<"even:"<<even<<endl;
	
	cout<<"odd:"<<odd;
	
	
	
	
	
return 0;
}
