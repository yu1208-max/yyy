#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int b = 1;
    while (getline(cin, s)) {
      
        for (char& a : s) {
            if (a == '"') {
                
                if (b) {
                    cout << "``";
                    b = 0;
                }
                else {
                    cout << "''";
                    b = 1;
                }
                

            }
            else {
                cout << a;
            }
        }
        cout << endl;
    }
}
