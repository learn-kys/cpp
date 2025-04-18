#include <iostream>
using namespace std;
int main() {
    float p, t, r;
    cout << "Principle ammount " << endl;
    cin >> p;
    cout << "time(month)" << endl;
    cin >> t;
    cout << "rate" << endl;
    cin >> r;

    float si = (p * t * r) /100;

    cout << "Simple interest is " << si << endl;
    cout << "total ammount: " << p + si << endl;
}