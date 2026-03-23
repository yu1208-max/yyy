#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m;
	while (cin >> n >> m) {
		vector<int>v;
		v.push_back(n);
		if (m <= 1||n<=1) {
			cout << "Boring!" << endl;
			continue;
		}
		bool a = true;
		while (n!= 1) {
			
			if (n % m == 0) {
				v.push_back(n / m);
				n /= m;
			}
			else {
				cout << "Boring!" << endl;
				a = false;
				break;
			}
			
		}
		if (a) {
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] ;
				if (i != v.size() - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}