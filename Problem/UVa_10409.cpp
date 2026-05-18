#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	while (cin >> a && a != 0) {
		int t = 1;
		int w = 3;
		int e = 4;
		int b = 6;
		int n = 2;
		int s = 5;

		while (a--) {
			string k;
			cin >> k;
			if (k == "north") {
				int temp = t;
				t = s;
				s = b;
				b = n;
				n = temp;
			}
			else if (k == "south") {
				int temp = t;
				t = n;
				n = b;
				b = s;
				s = temp;
			}
			else if (k == "east") {
				int temp = t;
				t = w;
				w = b;
				b = e;
				e = temp;
			}
			else if (k == "west") {
				int temp = t;
				t = e;
				e = b;
				b = w;
				w = temp;
			}
		}
		cout << t << endl;
	}
}