#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

long double f(long double x) {
    return og(pow(cos(x), 2.0));
}

long double forward_diff(long double x, long double h, int k) {
    if (k == 0) return f(x);
    else return forward_diff(x + h, h, k - 1) - forward_diff(x, h, k - 1);
}

long double central_diff(long double x, long double h, int k) {
    if(k == 0) return f(x);
        else return central_diff(x + h/2.0, h, k - 1) - forward_diff(x - h/2.0, h, k - 1);
}

int main() {
    cout << forward_diff( M_PI/4, 0.0001, 3)/pow(0.0001, 3) << endl;
        cout << central_diff( M_PI/4, 0.0001, 3)/pow(0.0001, 3) << endl;
        return 0;

}