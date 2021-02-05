#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i=0;i<n;i++) {
		cin >> array[i];
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = i; j < n; j++) {
			cout << array[i] << " " << array[j] << "\n";
			if (array[i] == array[j]) {
				s.push(-1);
			}
			else if (array[i] < array[j]) {
				s.pop();  
				s.push(array[j]);
				break;
			}
			cout << s.top() << "\n";
		}
	}

	for (int i = 0; i < s.size(); i++) {
		cout << s.top() << " ";
		s.pop();
	}
}