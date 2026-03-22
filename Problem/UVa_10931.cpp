#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while (cin >> n && n != 0) {
		vector<int>v;
		while (n > 0) {
			if (n % 2 == 1) {
				v.push_back(1);
			}
			else {
				v.push_back(0);
			}
			n /= 2;
		}
		int counter = 0;
		for (int a : v) {
			if (a == 1) {
				counter++;
			}
		}
		cout << "The parity of ";
		for (int i = v.size() - 1; i >= 0; i--) {
			cout << v[i];
		}
		cout << " is " << counter << " (mod 2)." << endl;
	}
}