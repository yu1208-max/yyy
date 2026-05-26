#include<bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int a, int b) {
	int x = a % m;
	int y = b % m;
	if (x != y) {
		return x < y;
	}
	bool odda = abs(a % 2);
	bool oddb = abs(b % 2);
	if (odda != oddb) {
		return odda;
	}
	if (odda) {
		return a > b;
	}
	else {
		return a < b;
	}
}
int main() {
	
	while (cin >> n >> m) {
		if (n == 0 && m == 0) {
			cout << "0 0" << endl;
			break;
		}
		vector<int>v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end(), cmp);
		cout << n << " " << m << endl;   
		for (int i = 0; i < n; i++) {
			cout << v[i] << endl;
		}
	}

}