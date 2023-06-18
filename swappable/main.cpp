#include "swap.hpp"

#include <iostream>

int main() {
	T a {5, 10}, b{100, 200};
	std::swap(a, b);

	std::cout << "a = {" << a.x << ", " << a.y << "}\n";
	std::cout << "b = {" << b.x << ", " << b.y << "}\n";
}