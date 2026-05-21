#include<bits/stdc++.h>
using namespace std;
int main() {
	int x;
	while (cin >> x && x != 0) {
		int sum = 0;
		while (x > 9) {
			while (x > 0) {
				sum += x % 10;
				x /= 10;
			}
			x = sum;
		}
		cout << x << endl;
	}
}