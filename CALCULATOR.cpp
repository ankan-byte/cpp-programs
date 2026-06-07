#include <iostream>
using namespace std;

int main() {
    char op;
    float a, b;

    do {
        cout << "Enter: ";
        cin >> a >> op >> b;

        if(op == '+') {
            cout << "=" << a + b << endl;
        } else if(op == '-') {
            cout << "=" << a - b << endl;
        } else if(op == '*') {
            cout << "=" << a * b << endl;
        } else if(op == '/') {
            if(b == 0) {
                cout << "undefined" << endl;
            } else {
                cout << "=" << a / b << endl;
            }
        }

    } while(op != 'q');

    return 0;
}