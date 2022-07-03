#include <iostream>
using namespace std;

void print(int* arr, int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}	
	cout<<endl;
}

void sort(int* arr,int n){
	
	if(n==0 ){
		return ;
	}
	
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
			swap(arr[i],arr[i+1]);
	}
	
	sort(arr,n-1);
}

int main(){
	
	int ar[5] = {1,2,35,24,5};
	
	print(ar,5);
	sort(ar,5);
	
	print(ar,5);
	return 0;
}
