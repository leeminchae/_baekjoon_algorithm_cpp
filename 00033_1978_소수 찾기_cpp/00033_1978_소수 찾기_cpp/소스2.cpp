#include <iostream>

using namespace std;

bool prime(int n) {
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

int main(){
	int n, len=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (prime(a) == 1) {
			len += 1;
		}
	}
	cout << len << '\n';
}