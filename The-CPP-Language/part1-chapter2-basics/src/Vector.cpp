#include "Vector.h"
#include <stdexcept>

using namespace std;

Vector::Vector(int s) 
    :elem{new double[s]}, sz{s}
{
}

double& Vector::operator[](int i) {
    
    // Exception = runtime hata olduğunda kontrolü başka bir yere devretme mekanizması.
    // static_assert = derleme zamanında hata yakalar
    if (i < 0 || size() <= i) throw out_of_range{"Vector::operator[]"}; // exception handling
    return elem[i];

}

int Vector::size(){
    return sz;
}