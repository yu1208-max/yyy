#include<iostream>
using namespace std;
int main() {
    int a, b;
    while (cin >> a>>b) {
        int counter = 1;
        int max = 0;
        cout << a << " " << b << " ";
        if (a > b) {
            swap(a, b);
        }
        for (int i = a; i <= b; i++) {
            int n = i;
            counter = 1;
            while (n != 1) {
                if (n % 2 == 1) {
                    n = 3 * n + 1;
                    counter++;
                    
                }
                else {
                    n = n / 2;
                    counter++;
                }
            }
            if (counter > max) {
                max = counter;
                
            }
        }
        cout << max << endl;
    }
}
