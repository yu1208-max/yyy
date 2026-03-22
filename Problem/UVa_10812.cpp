#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int sum, dis;
		cin >> sum >> dis;
		int a = (sum + dis) / 2;
		int b = sum - a;
		if (dis > sum||(sum+dis)%2!=0) {//(sum+dis)%2!=0
			cout << "impossible" << endl;
		}
		else {
			cout << a << " " << b << endl;
		}
	}
}