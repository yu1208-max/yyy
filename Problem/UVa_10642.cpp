#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int counter = 1;
	while (n--) {
		cout << "Case " << counter << ": ";
		counter++;
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
			int a = x1 + y1;
			int b = x2 + y2;
			int dis = 0;
			int sum1 = 0;
			for (int i = 0; i <= a; i++) {
				sum1 += i;
			}
			sum1 += x1;
			int sum2 = 0;
			for (int i = 0; i <= b; i++) {
				sum2 += i;
			}
			sum2 += x2;
			cout << sum2 - sum1 << endl;
		}
	}
	
