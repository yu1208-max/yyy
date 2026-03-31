#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
	while (a % b) {
		a = a % b;
		swap(a, b);
	}
	return b;
}
int main() {
	int t;
	cin >> t;
	int counter = 1;
	while (t--) {
		string a, b;
		cin >> a >> b;
		cout << "Pair #" << counter << ": ";
		counter++;
		long long c = 0;
		int x = 0;
		for (int i = a.size()-1; i >= 0; i--) {
			c += pow(2, x) * (a[i]-'0');
			x++;
			
		}
		long long d = 0;
		int y = 0;
		for (int i = b.size()-1; i >= 0; i--) {
			d += pow(2, y) * (b[i]-'0');
			y++;
		}
		if (GCD(c, d) > 1) {
			cout << "All you need is love!" << endl;
		}
		else {
			cout << "Love is not all you need!" << endl;
		}
	}
}