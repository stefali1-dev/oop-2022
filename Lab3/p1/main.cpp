#include <iostream>
#include "Math.h"

int main() {
	// concatenare 2 siruri:
	std::cout << Math::Add("primul sir--", "--al doilea");

	int a, b, c;
	std::cout << "Enter 3 integers: ";
	std::cin >> a >> b >> c;
	std::cout << "\na + b = " << Math::Add(a, b) << '\n';
	std::cout << "a + b + c = " << Math::Add(a, b, c) << '\n';
	std::cout << "a * b = " << Math::Mul(a, b, c) << '\n';
	std::cout << "a * b * c = " << Math::Mul(a, b, c) << '\n';

	double a1, b1, c1;
	std::cout << "Enter 3 numbers: ";
	std::cin >> a1 >> b1 >> c1;
	std::cout << "\na + b = " << Math::Add(a1, b1) << '\n';
	std::cout << "a + b + c = " << Math::Add(a1, b1, c1) << '\n';
	std::cout << "a * b = " << Math::Mul(a1, b1, c1) << '\n';
	std::cout << "a * b * c = " << Math::Mul(a1, b1, c1) << '\n';
	std::cout << "1 + 2 + 3 + 4 + 5 = " << Math::Add(5, 1, 2, 3, 4, 5);
}
