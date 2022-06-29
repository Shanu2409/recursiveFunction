#include <iostream>
using namespace std;

int bi(int arr[], int s, int e, int k){
	int mid = (s+e)/2;
	
	if(arr[mid]==k){
		return mid;
	} 
	
	if(k>arr[mid] && k < e) {
		s = mid + 1;
		return bi(arr,s,e,k);
	} 
	else if (k<arr[mid] && k > s){
		e = mid -1;
		return bi(arr,s,e,k);
	}
	else
		return -1;
	
}

int main(){
	
	int n;
	
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	
	int* arr = new int[n];
	
	cout<<"Enter elements in array  : "<<endl;
	
	for(int i=0; i<n;i++)
		cin>>arr[i];
		
	int key;
	
	cout<<endl;
	cout<<"Enter a number to search using binary search : "<<endl;
	cin>>key;
	
	cout<<endl;
	cout<<"Number is at this location in array : " <<bi(arr,0,n-1,key);
	
	return 0;
}
