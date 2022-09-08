// Array as a parameter to a function

#include <iostream>
#include <stdio.h>

// defining namespace
using namespace std;

// Pasing array to a function
/*
void fun(int A[], int n){
	// Flag
	cout << "Inside function" << endl;
	// print the size of the array
	// cout << "Size of array: " << sizeof(A) / sizeof(int) << endl;
	// checking values in our array
	// We can't use for each as A is a pointer!
	// for(int a: A) 
	for(int i=0; i<n; i++)
		cout << A[i] << endl;
}*/

// If we want to pass as a pointer
void fun(int *A, int n){
	// flag
	cout << "Inside pointer function" << endl;
	for(int i=0; i<n; i++)
		cout << A[i] << endl;
}

// returning an array
int * returnArray(int size){
	int *p;
	
	p = new int[size];
	
	for(int i=0; i<size; i++){
		p[i] = i+1;
	}
	
	return p;
}



// Main function
int main(void){
	// creation of array
	int A[] = {2, 4, 6, 8, 10};
	int n = 5;
	
	// For each element in a
	cout << "Inside Main" << endl;
	for(int x:A)
		cout << x << endl;
		
	// Comparing the size in main vs function
	//cout << "Size of array in main: " << sizeof(A) / sizeof(int) << endl;
	// doing this won't work as it says that A has a size of 2.
	// instead, is returning the size of the pointer!
	fun(A, n);
	
	// For second test
	cout << "Testing returning array" << endl;
	
	int *ptr, sz = 5;
	
	ptr = returnArray(sz);
	
	cout << "Returned array" << endl;
	
	for(int i=0; i<sz; i++)
		cout << ptr[i] << " " << endl;
	
	
	return 0;
}




