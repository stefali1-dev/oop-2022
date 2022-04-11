
#include <iostream>
#include "Template.h"
float operator"" _Kelvin(unsigned long long int x) {
    return x + 273.15f;
}

float operator"" _Fahrenheit(unsigned long long int x) {
    return (x - 32) * 5 / 9;
}

int main() {

    float a = 300_Kelvin;
    float b = 120_Fahrenheit;

    Vector<int> v;

    v.push(3);
    v.push(23);
    v.push(13);
    v.push(6432);

    std::cout << v.get(2) << "\n" << v.count();

    return 0;

}
