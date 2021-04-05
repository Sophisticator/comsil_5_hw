#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n <= 10) {
		for (int i = 0; i < n; i++)cout << "*";
		cout << endl;
	}
}