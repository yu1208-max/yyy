#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int counter = 1;
	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << "Case " << counter << ": ";
		counter++;
		int sum = 0;
		for (int i = a; i <= b; i++) {
			if (i % 2 == 1) {
				sum += i;
			}
		}
		cout << sum << endl;
	}
}