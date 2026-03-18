#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	cin.ignore();
	while (t--) {
		map<string, double>mp;
		string s;
		int counter = 0;
		while (getline(cin, s)&&s!="") {
			counter++;
			mp[s]++;
		}
		
		for (auto a : mp) {
			cout << a.first << " " << fixed << setprecision(4) << (a.second / counter) * 100 << endl;

			
		}
		if (t) {
			cout << endl;
		}
	}
}