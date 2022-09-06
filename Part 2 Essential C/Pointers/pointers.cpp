//
// Created by Cachemarra on 9/5/2022.
//
#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

// For last part we create the struct Rectangle
struct Rectangle{
	int length;
	int width;	
};



int main(void){
	// Pointer to var
	/*
    int a = 10;
    int *p;

    // Assign address of a
    p = &a;

    cout << a << endl;;
	printf("using pointer %d %d", p, &a);
	*/
	
	// Pointer to Array
	/*
	int A[5] = {2, 3, 6, 8, 10};
	int *p;
	p = A; // Not use & when pointing to an array
	
	for(int i=0; i<5; i++){
		cout << p[i] << endl;
	}
	*/
	/*
	// Memory allocation
	int *p;
	
	// This will allocate 5 spaces of int for p.
	// So it will behave as an array
	p = (int *) malloc(5*sizeof(int)); // C way
	p = new int[5]; // C++ way
	
	// Assign values
	p[0] = 10;
	p[1] = 15;
	p[2] = 14;
	p[3] = 21;
	p[4] = 31;
	
	for(int i=0; i<5; i++){
		cout << p[i] << endl;
	}
	
	
	// When using new we must delete the space!
	delete [ ] p; // Releasing the memory C++ way
	
	free(p); // C way
	*/
	
	// Multiple pointers
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct Rectangle *p5;
	
	// Print sizes
	cout << sizeof(p1) << endl;
	cout << sizeof(p2) << endl;
	cout << sizeof(p3) << endl;
	cout << sizeof(p4) << endl;
	cout << sizeof(p5) << endl;
	// Why all pointers have a size of 8?
	/*Whatever the data type the pointer is, this is going to take
	same amount of memory every pointer takes the same amount of memory.*/
	
    return 0;
}
