#include <iostream>
using namespace std;

int main() {
	int a, b, x, c, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	if (x - 1 < 0 && b - x != 0) {
		F = a * (x * x) + b;
	}
	else if (x - 1 > 0 and b + x == 0) {
		F = x - a / x;
	}
	else {
		F = x / c;
	}
	cout << "F = " << F << endl;
	return 0;
}