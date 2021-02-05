#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int k1, k2, k3, k4;
	cin >> a >> b >> c;
	k1 = (a + b) % c;
	k2 = ((a % c) + (b % c)) % c;
	k3 = (a * b) % c;
	k4 = ((a % c) * (b % c)) % c;
	cout << k1 << "\n" << k2 << "\n" << k3 << "\n" << k4;
}