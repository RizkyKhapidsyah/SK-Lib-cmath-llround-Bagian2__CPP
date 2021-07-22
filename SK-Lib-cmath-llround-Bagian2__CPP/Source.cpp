#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
    long long int result;
    double x = 11.16;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    x = 13.87;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    x = 50.5;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    x = -11.16;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    x = -13.87;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    x = -50.5;
    result = llround(x);
    cout << "llround(" << x << ") = " << result << endl;

    _getch();
    return 0;
}