#include <utility>

struct T {
	int x;
	int y;
};

void swap(T& x, T& y) {
	std::swap(x.x, y.x);
	std::swap(x.y, y.y);
}