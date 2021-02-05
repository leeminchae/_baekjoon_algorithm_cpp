#include <iostream>

using namespace std;

int main() {
	int a, b;
	int GCD = 1, LCM = 1;
	cin >> a >> b;
	for (int i = 2; i <= min(a, b); i++) {
		if (a % i == 0 && b % i == 0) {
			GCD = i;
		}
	}
	LCM = GCD * (a / GCD) * (b / GCD);
	cout << GCD << "\n" << LCM;
}