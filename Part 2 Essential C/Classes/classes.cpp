//
// Created by Cachemarra on 9/8/2022.
//
#include <iostream>

using namespace std;

// Class definition
class Rectangle{
    private:
        int length;
        int width;

    public:
        // Constructor
        // Our default values when created the class
        Rectangle(){
            length = 0;
            width = 0;
        }

        Rectangle(int l, int w){
            length = l;
            width = w;
        }
        int area(){return length * width;}
        int perimeter(){return 2 * (length + width);}

        // Setters
        void setLength(int l){length = l;}
        void setWidth(int w){width = w;}
        // Getters
        int getLength(){return length;}
        int getWidth(){return width;}

        // Destructor
        ~Rectangle(){cout << "Destroying class" << endl;}
};


// Main function
int main(void){
    Rectangle r(10, 5);

    // Getters:
    cout << "Testing getters" << endl;
    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;

    // Print area
    cout << endl << "Testing methods" << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}

