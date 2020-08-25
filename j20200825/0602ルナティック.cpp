#include <iostream>
using namespace std;

int area(int bottom, int heigth) {
	return bottom * heigth / 2;
}

int main() {

	cout << area(3, 10);
}