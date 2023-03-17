#include<iostream>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Enter on of Elements : ";
	cin>>n;
	
	int arr[n],i;
	
	for(i=0; i<=n; i++){
		
		cout<<"enter your element : ";
		cin>>arr[i];
	}
	
	cout<<"\n even element are : ";
	
	for(i=0; i<n; i++){
		
		if(arr[i]%2==0){
			
			cout<<arr[i]<<"\t";
		}
	}
	
	return 0;
}
