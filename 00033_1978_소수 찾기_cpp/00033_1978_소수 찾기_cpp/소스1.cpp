#include <iostream>

using namespace std;

bool prime1(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n-1; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool prime2(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool prime3(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	cout << prime1(n) << '\n' << prime2(n) << '\n' << prime3(n);
}