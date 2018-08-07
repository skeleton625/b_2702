#include <iostream>
using namespace std;

int main() {
	int a, b, m, n, t, tmp;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		m = a; n = b;
		while (m%n != 0) {
			tmp = n;
			n = m % n;
			m = tmp;
		}
		cout << (a*b) / n << " " << n << endl;
	}
	return 0;
}