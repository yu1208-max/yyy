#include<iostream>
using namespace std;
int main() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0) {
			break;
		}
		int cmp = 0;
		int c = 0;
		while (a > 0 || b > 0) {
			if (a % 10 + b % 10 + c>9) {
				cmp++;
				c = 1;
			}
			else {
				c = 0;
			}
			a /= 10;
			b /= 10;
		}
		if (cmp == 0) {
			cout << "No carry operation." << endl;
		}
		else if (cmp == 1) {
			cout << "1 carry operation." << endl;
		}
		else {
			cout << cmp << " carry operations."<<endl;
		}
		
	}
}