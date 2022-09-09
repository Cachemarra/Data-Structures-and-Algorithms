//
// Created by Cachemarra on 9/8/2022.
//
#include "iostream"

using namespace std;

// Template class
class Arithmetic {
private:
    int a;
    int b;

// Declaring methods but not defining
public:
    Arithmetic(int a, int b);
    int add();
    int sub();
    // Destructor
    ~Arithmetic();
};

// Defining function methods
// Constructor
Arithmetic::Arithmetic(int a, int b){
    this -> a = a; // In this way, the compiler will know
    this -> b = b; // the difference between both variables.
}

// Methods
// Adding function
Arithmetic::add(){
    int c;
    c = a + b;
    return c;
}
// Subtracting method
Arithmetic::sub(){
    int c;
    c = a - b;
    return c;
}

Arithmetic::~Arithmetic() {cout << endl << "Destroying class" << endl;}




// Main function
int main(void){
    Arithmetic ar(10, 5);

    // Using method
    cout << "add method: " << ar.add() << endl;
    cout << "sub method: " << ar.sub() << endl;


    return 0;
}
