#include <iostream>
using namespace std;

//display array funtion 
void display(int a[], int n){
	for (int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}
}

void deletion(int a[], int size, int index){
	//deletion logic
	for (int i=index; i<size; i++){
		a[i]= a[i+1];
	}
}

int main() {

	int a[100],i, index, size;

	cout <<"Enter the array size : \n";
	cin>>size;
	cout<<"Write the elements in array : \n";

	for(i=0; i<size; i++){
		cin>>a[i];
	}
	cout<<"Your array is :"<<endl;
	display(a, size);
	
	cout<<"Enter the index you want to delete";
	cin>>index;
	cout<<endl;
	
	if (size<=index){
		cout<<"Outside the array";
	}
	else{
		
	deletion(a,size,index);
	size=size-1;
	cout <<"New array \n";
	display(a,size);
	}
	
	return 0;
}
