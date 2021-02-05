#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	string str;
	getline(cin, str);
	str += '\n';
	stack<char> s;
	for (char ch : str) {
		if (ch == ' ' || ch == '\n' || ch=='<') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << ch;
		}
		else if (tag) {

		}
		else {
			s.push(ch);
		}
	}
	return 0;
}