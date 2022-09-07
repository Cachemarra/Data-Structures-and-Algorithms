// Pointer to Structure

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Rectangle struct
struct Rectangle{
	int length;
	int width;
};


int main(){
	
	Rectangle *p;
	
	// Creating pointer in heap for the structure
	// This is casting part    This the allocation of memory
	p = (struct Rectangle *) malloc(sizeof(struct Rectangle));
	
	p -> length = 15;
	p -> width = 7;
	
	cout << p->length << endl;
	cout << p->width << endl;
	
	return 0;
}


