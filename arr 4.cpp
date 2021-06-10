#include <iostream>
using namespace std;
int main (){
	int s;
	cout<<"Enter the size:";
	cin>>s;
	
	int arr[s];
	for(int i=0; i<s; i++){
		cin>>arr[i];
	}
int 	max=arr[0];
int 	min=arr[0];
	for(int i=0;i<s;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}}
		cout<<"Max="<<max<<endl;
		cout<<"Min="<<min<<endl;
	
return 0;
}
