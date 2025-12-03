#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3) {
            cout << "Largest number: " << n1 << endl;
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    } else {
        if (n2 >= n3) {
            cout << "Largest number: " << n2 << endl;
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    }

    return 0;
}

/*
 Enter three numbers: 4 8 9
 Largest number: 9
 Program ended with exit code: 0
 */
