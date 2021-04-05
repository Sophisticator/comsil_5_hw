#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 10) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << "*";
			}
			cout << "\n";
		}
		cout << endl;

		int a = 1;
		while (a <= n) {
			for (int i = 0; i < a; i++) cout << "*";
			a++;
			cout << "\n";
		}
		while (a > 0) {
			for (int i = 0; i < a; i++) cout << "*";
			a--;
			cout << "\n";
		}
		cout << endl;
	}
}