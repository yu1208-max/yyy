#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a = n;
		int counter1 = 0;
		int counter2 = 0;
		while (a > 0) {
			if (a % 2 == 1) {
				counter1++;
				
			}
			a /= 2;
		}
		int sum = 0;
		while (n > 0) {
			for (int i = 0;; i++) {
				sum += pow(16, i) * (n % 10);
				n /= 10;
				if (n <= 0) {
					break;
				}
		}
		}
		while (sum > 0) {
			if (sum % 2 == 1) {
				counter2++;
				
			}
			sum /= 2;
		}
		cout << counter1 << " " << counter2 << endl;
	}
}