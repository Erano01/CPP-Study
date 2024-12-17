#include <iostream>

int main() {
	


}
//object decleration.
//x is built-in type but we called it as object, some people calls objects that only being user-defined.
extern int x;

//object defination
int y;

// function decleration, each function decleration has function signature(parameter+return type)
// there are nothing about return type in c++ official defination of function signature.
std::size_t numDigits(int number);

//function defination
std::size_t numDigits(int number) {
	std::size_t digitsSoFar = 1;
	while ((number /= 10) != 0) ++digitsSoFar;
	return digitsSoFar;
}

//class decleration
class Widget;

//class defination
class Widget {
public:
	Widget();
	~Widget();
};

//template decleration. see Item 42 for info on the use of "typename"
template<typename T> class GraphNode;

//template defination
template<typename T> class GraphNode {
public:
	GraphNode();
	~GraphNode();
};

class A {
public:
	A(); //default constructor, its used for object initilization
};

class B {
public:
	//default constructor; see below for info on "explicit"
	explicit B(int x = 0, bool b = true);
	//explicit keyword stands for preventing implicit type conversions on explicit annotated object.
};

class C {
public:
	//not a default constructor
	explicit C(int x); 
};