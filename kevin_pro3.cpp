#include<iostream>

using namespace std;

int main(){
	
	int arr[256],i;
	
	cout<<"leap year 2020 to 3030 : "<<endl;
	
	for(i=2020; i<=3030; i++){
		
		if(i%4==0){
			
			cout<<i;
		}
		cout<<"  ";
	}	
	return 0;
}
