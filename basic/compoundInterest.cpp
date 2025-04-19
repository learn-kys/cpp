#include <bits/stdc++.h>
using namespace std;

int main() {
    float principle, rate, time;
    cout << "Principle amount: " << endl;
    cin >> principle;
    cout << "Time (in months): " << endl;
    cin >> time;
    cout << "Annual rate (in %): " << endl;
    cin >> rate;

    // Calculate amount after compound interest
    float amount = principle * pow((1 + rate/100), time);

    // Calculate CI
    float ci = amount - principle;

    cout << "Compound Interest: " << ci << endl;
    cout << "Total Amount after " << time << " months: " << amount << endl;

    return 0;
}
