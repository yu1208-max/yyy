#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	while (cin >> t) {
		vector<int>v;
		while (t--) {
			int n;
			cin >> n;
			v.push_back(n);
		}
		vector<int>dis;
		for (int i = 0; i < v.size() - 1; i++) {
			int k = abs(v[i + 1] - v[i]);
			dis.push_back(k);
		}
		sort(dis.begin(), dis.end());
		bool jolly = true;
		for (int i = 1; i < v.size(); i++) {
			if (i != dis[i - 1]) {
				jolly = false;
			}
		}
		if (jolly) {
			cout << "Jolly" << endl;
		}
		else {
			cout << "Not jolly" << endl;
		}
	}
	
	
	
}