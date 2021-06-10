#include <iostream>
using namespace std;
int main (){
	int s;
	cout<<"Enter the size:";
	cin>>s;
	
	int num[s];
	int count=0;
	for(int i=0;i<s;i++){
		cin>>num[i];
	}
	for(int i=0;i<s;i++){
		if(num[i]<0){
			count++;
		}
	}
	int neg[count];
	for(int i=0;i<=s;i++){
		if(num[i]<0){
			neg[count]=num[i];
						
		cout<<"All negative elements in array are: "<<neg[count];
		}
	}
	
	return 0;

}
