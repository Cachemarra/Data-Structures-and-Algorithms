//
// Created by Cachemarra on 9/5/2022.
//
#include <stdio.h>
#include <iostream>

using namespace std;

// Creation of the structure called Rectangle
struct Rectangle {
    int length;
    int width;
    char x;
}; // We can declare global var here.


// Main function
int main(void){
    // Instantiation of our struct
    struct Rectangle r1 = {10, 5};

    printf("%d\n", sizeof(r1)); // The size is the sum of all types inside the struct

    // Assign new values
    r1.length = 15;
    r1.width = 7;

    // attributes
    cout << r1.length << endl;
    cout << r1.width << endl;

}
