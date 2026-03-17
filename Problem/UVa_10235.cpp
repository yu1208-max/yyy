#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> np(1000055);
	
	np[0] = 1;
	np[1] = 1;
	for (int i = 2; i <= 1000; i++) {
		if (!np[i]) {
			for (long long j = i * i; j < 1000000; j += i) {
				np[j] = 1;
			}
		}
	}
	int a;
	while (cin >> a) {
		cout << a ;
		int c = a;
		int b = 0;
		while (c > 0) {
			b = b*10+c % 10;
			c /= 10;
		}
		if (np[a]) {
			cout << " is not prime." << endl;
		}
		else if (!np[a] && !np[b]&&a!=b) {
			cout << " is emirp." << endl;
		}
		else {
			cout << " is prime." << endl;
		}
	}
	
}