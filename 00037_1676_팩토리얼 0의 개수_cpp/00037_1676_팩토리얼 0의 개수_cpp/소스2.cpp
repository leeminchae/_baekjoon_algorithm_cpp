#include <iostream>

using namespace std;

int zero(int n) {
	int k = 0;
	for (int i = 5; i <= n; i*=5) {
		k += n / i;
	}
	return k;
}

int main() {
	int n;
	cin >> n;
	cout << zero(n) << '\n';
}