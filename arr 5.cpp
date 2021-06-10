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
int max=arr[0];
 for(int i=0;i<s;i++){
	if(	arr[i]>max){
		max=arr[i];
	}
}
cout<<"Max:"<<max<<endl;

int smax=arr[0];
 for(int i=0;i<s;i++){
 	if(arr[i]>smax && arr[i]<max){
 		smax=arr[i];
	}
 }
	
 
cout<<"Second maximum number is:"<<smax;
 



return 0;
}
