#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double tolerance;
    double pi = 0.0;
    double prev_pi = 0.0;
    double difference = 0.0;
    double denominator = 1.0;
    int sign = 1;
    int term = 0;


    do {
        cout << "Enter tolerance (0.0 < e < 0.1): ";
        cin >> tolerance;
    } while (tolerance <= 0.0 || tolerance >= 0.1);

    cout << fixed << setprecision(12);


    do {
        prev_pi = pi;
        pi += sign * (4.0 / denominator);

        cout << term << "\t\t" << pi << endl;

        term++;
        denominator += 2.0;
        sign *= -1;
        difference = fabs(pi - prev_pi);

    } while (difference >= tolerance);

    cout << "\nFinal approximation of π: " << pi << endl;

    return 0;
}