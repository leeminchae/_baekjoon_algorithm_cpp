#include <iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return 0;
}

int main() {
	int a, b, GCD, LCM;
	cin >> a >> b;
	GCD = gcd(a, b);
	LCM = GCD * (a / GCD) * (b / GCD);         // 예외가 처리되지 않음
	cout << GCD << "\n" << LCM;
}

// 예외가 처리되지 않음