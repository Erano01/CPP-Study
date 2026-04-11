#include <iostream>
using namespace std;

// Topics:
// 1- Built-in types and user-defined types -> int, double, char, struct, class, enum
// 2- Objects and memory -> Variables, pointers, addresses, dereferencing
// 3- Immutable structures -> const and constexpr
// 4- Generic programming -> void pointers and template functions

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
struct Vector
{
    int sz;
    double *elem;
};

// These are C++'s immutable structures.
const int MAX_SIZE = 1000;     // equivalent to static final in Java/C#.
constexpr double PI = 3.14159; // constexpr is a more powerful version of const. Evaluated at compile-time.

// For a function to be `constexpr`, it needs to be quite simple: just a `return` statement that calculates a value.
constexpr double square(double x)
{
    return x * x;
}

// Generic Programming -> writing code that can work with any data type. Void Pointers & Template Functions

// void pointer'larla çalışırken -> Tip bilgisini sen taşıyorsun, runtime'da switch/if yapıyorsun, cast'ı sen yapıyorsun. Yanlış tip geçersen undefined behavior, compiler hiçbir şey söylemez.
void print_value(void *p, char type)
{
    if (type == 'i')
        printf("%d", *(int *)p);
    if (type == 'd')
        printf("%f", *(double *)p);
}
// C++17 ile gelen template fonksiyonlar sayesinde, void pointer'larla uğraşmadan, tip güvenli bir şekilde yazabiliriz.
// Template fonksiyonlar, compile-time'da çağrıldıkları tiplere göre otomatik olarak özel bir versiyonunu oluşturur. 
// Bu sayede, farklı tipler için aynı fonksiyon gövdesini kullanarak, tip güvenli ve daha okunabilir kod yazabiliriz.

// Template'ler void*'ın generic programming rolünü devraldı. Ama void* alt katmanlarda, 
// C sınırında hâlâ yaşıyor, sadece artık doğrudan kullanıcı kodunda görmek istemiyoruz.
// Templates'in ulaşamadığı yerler var:
// C API Interop -> malloc, memcpy, pthread_create hepsi void* alır/return eder.
// Type Erasure -> std::any, std::function gibi yapılar içeride void* kullanır, ama bunu senden gizler
// Runtime polymorphism -> Type compile time'da bilinmiyorsa template yetersiz kalır.
template <typename T>
void print_value(T value)
{
    std::cout << value;
}

// static assertions -> compile-time'da belirli koşulların sağlanıp sağlanmadığını kontrol etmek 
// için kullanılır. Eğer koşul sağlanmazsa, derleme hatası verir ve hata mesajını gösterir.
static_assert(sizeof(int) == 4, "int must be 4 bytes");

int main()
{

    // << -> put to operator
    std::cout << "Do you want to calculate the area of a circle? (y/n): ";

    char answer;
    // >> -> get from operator
    std::cin >> answer;

    switch (answer)
    {
    case 'y':
    {
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

    int x = 15;              // 0x7ffdde57212c(adress) -> 15 (value)
    int *ptr = &x;           // 0x7ffdde572130(adress) -> 0x7ffdde57212c (value)
    int **ptr_to_ptr = &ptr; // 0x7ffdde572138(address) -> 0x7ffdde572130 (value)

    // x value and address
    cout << "x value: " << x << "\n";
    cout << "x address: " << &x << "\n";

    // Pointer dereferencing -> for getting values
    cout << "ptr* pointer dereferencing: " << *ptr << "\n";
    cout << "ptr** pointer dereferencing: " << **ptr_to_ptr << "\n";

    // Addresses of variables
    cout << "ptr address: " << &ptr << "\n";
    cout << "ptr_to_ptr address: " << &ptr_to_ptr << "\n";

    // Values of pointers
    cout << "ptr value (address of x): " << ptr << "\n";
    cout << "ptr_to_ptr value (address of ptr): " << ptr_to_ptr << "\n";

    // cannot dereference void pointer ! Because it has no type, so the compiler doesn't know how many bytes to read from memory when dereferencing it.
    void *void_ptr = &x; // cause error if we try to dereference it.
    // cout << "void_ptr pointer dereferencing: " << *void_ptr << "\n";  // error: ‘void*’ is not a pointer-to-object type
    // so basically void pointers is typeless pointers.

    return 0;
}