#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<char> c;
	stack<int> i;
	int sum = 0;
	string str;
	cin >> str;
	for (char ch : str) {
		if (ch == '+' || ch =='-') {
			c.push(ch);
		}
		else if (ch == '*' || ch =='/') {

		}
		else {
			atoi(str.c_str(ch));
		}
	}
}