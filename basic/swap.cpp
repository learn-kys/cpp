#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
    int m = 10;

    // swapping logic are here
    /* first method
    int temp = n;
    n = m;
    m = temp;

    */

/* second logic
    m = n + m;
    n = m - n;
    m = m - n;
*/

// third logic

// using inbuild math function in stl librabry

/*
swap(n, m);
*/

// 4th method, using xor

    n = n ^ m;
    m = n ^ m;
    n = n ^ m;

    cout << n << endl;
    cout << m << endl;

}