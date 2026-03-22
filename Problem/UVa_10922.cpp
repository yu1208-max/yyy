#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while (cin >> s && s !="0") {
		int sum = 0;
		for (char a : s) {
			sum += a - '0';
		}
		if (sum % 9 != 0) {
			cout << s << " is not a multiple of 9." << endl;
		}
		else {
			int counter = 1;
			while (sum > 9) {
				int d = 0;
				while (sum > 0) {
					
					d += sum % 10;
					sum /= 10;
				}
				sum = d;
				counter++;
			}
			cout << s << " is a multiple of 9 and has 9-degree " << counter << "." << endl;
		}
	}
}