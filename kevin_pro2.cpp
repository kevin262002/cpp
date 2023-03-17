#include<iostream>

using namespace std;

int main(){
	
	char arr[100],i;
	
	cout<<"Enter sentence : ";
	cin>>arr;
	
	for(i=0; arr[i]!='\0';i++){
		
		if(arr[i]>='A' && arr[i]<='Z'){
			
			arr[i]+=32;
		}
		else if(arr[i]>='a' && arr[i]<='z'){
			
			arr[i]-=32;
		}
    }
    cout<<arr;
		
	return 0;
}
