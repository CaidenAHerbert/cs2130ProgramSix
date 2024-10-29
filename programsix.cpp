#include <iostream>
#include <iomanip>
using namespace std;

bool andFunction(bool x, bool y) {
    return x && y;
}

bool orFunction(bool x, bool y) {
    return x || y;
}

bool notFunction(bool x) {
    return !x;
}

bool proposition(bool a, bool b, bool c, bool d, bool e) {
    return andFunction(andFunction(orFunction(c, notFunction(d)), b), notFunction(orFunction(d, andFunction(a, e))));
}

int main() {
    cout << " a |  b |  c |  d |  e | (( c V ~d ) A b ) A ~( d V a A e )" << endl;
    cout << "-----------------------------------------------------------" << endl;

    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            for (int c = 0; c <= 1; ++c) {
                for (int d = 0; d <= 1; ++d) {
                    for (int e = 0; e <= 1; ++e) {

                        bool result = proposition(a, b, c, d, e);

                        cout << setw(2) << a << " | "
                             << setw(2) << b << " | "
                             << setw(2) << c << " | "
                             << setw(2) << d << " | "
                             << setw(2) << e << " | "
                             << setw(20) << result << endl;
                    }
                }
            }
        }
    }

    return 0;
}
