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
	LCM = GCD * (a / GCD) * (b / GCD);         // ���ܰ� ó������ ����
	cout << GCD << "\n" << LCM;
}

// ���ܰ� ó������ ����