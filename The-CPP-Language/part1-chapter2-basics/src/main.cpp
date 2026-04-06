#include <iostream>
using namespace std;

// In C++ there are 2 different variable types: user-defined types and built-in types. 
// Built-in types are defined by the compiler, such as int, double, char, etc. User-defined types are defined by the programmer, such as classes, structs, enums, etc. 

// This is built-in type and object.
// In C++, the definition of an object is: a memory region that holds the value of a specific type.
// The "object = class instance" definition that you might remember from Java/C# is part of those languages' own conventions.
int exampleOfObject = 5;

// Each built-in type has a specific size in bytes, which can vary depending on the platform and compiler. However, there are some common sizes for built-in types:
// bool,char -> 1 byte, 
// short -> 2 bytes, 
// int,float -> 4 bytes, 
// long,long long,double -> 8 bytes. 

// This custom Vector and std:Vector is user-defined type. Standard library types are also user-defined types.
// Everything the user can do, the standard library should be able to do with the same tools. There shouldn't be any need for compiler magic.
struct Vector {
    int sz;
    double* elem;
};

// These are C++'s immutable structures.
const int MAX_SIZE = 1000; // equivalent to static final in Java/C#.
constexpr double PI = 3.14159; // constexpr is a more powerful version of const. Evaluated at compile-time.

// For a function to be `constexpr`, it needs to be quite simple: just a `return` statement that calculates a value.
constexpr double square(double x) {
    return x * x;
}

int main() {
    
    // << -> put to operator
    std::cout << "Do you want to calculate the area of a circle? (y/n): ";

    char answer;
    // >> -> get from operator
    std::cin >> answer; 

    switch (answer)
    {
    case 'y': {
        std::cout << "Enter the radius of the circle: ";
        double radius;
        std::cin >> radius;
        double area = PI * square(radius);
        std::cout << "The area of the circle is: " << area << std::endl;
        break;
    }
    case 'n':
        std::cout << "Okay, maybe next time!" << std::endl;
        break;
    default:
        std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
        break;
    }

    // [] -> array of operator
    // char name[50];
    // std::cin >> name; // read a string into the array
    // * -> pointer defination operator, prefix unary ∗ 
    // prefix unary & operator gives the address of the variable, so p points to the 4th character of the name array.
    // char* p = &name[3]; 
    // std::cout << "The pointer p points to: " << *p << std::endl; // dereferencing
    // char x = *p; // dereferencing
    // std::cout << "The character at position 3 is: " << x << std::endl;


    int x = 15;
    int* ptr =  &x;
    int** ptr_to_ptr = &ptr;

    // Pointer dereferencing
    cout << "x: " << x << "\n";
    cout << "ptr*: " << *ptr << "\n";
    cout << "ptr**: " << **ptr_to_ptr << "\n";

    // Addresses of variables
    cout << "&x: " << &x << "\n";
    cout << "&ptr: " << &ptr << "\n";
    cout << "&ptr_to_ptr: " << &ptr_to_ptr << "\n";
    
    return 0;
}