#include<iostream>
using namespace std;
int main() {
	long long fib[50];//要用long long 才不會超過int限制
	fib[0] = 1;
	fib[1] = 2;
	for (int i = 0; i < 48; i++) {
		fib[i + 2] = fib[i] + fib[i + 1];
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << n << " = ";
		int d=0;
		for (int i = 49; i >= 0; i--) {
			if (fib[i] <= n) {//找比n小的最大fib值
				d = i;
				break;
			}
		}
		for (int j = d; j >= 0; j--) {
			if (fib[j] <= n) {
				cout << 1;
				n = n - fib[j];
			}
			else {
				cout << 0;
			}
		}
		cout << " (fib)" << endl;
	}
}