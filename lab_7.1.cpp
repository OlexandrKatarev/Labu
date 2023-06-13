#include <iostream>
#include <cmath>

using namespace std;

double func1(double x) {
    return x * atan(x) - log(sqrt(1 + x * x));
}
double func(double x, double N) {
    double a1 = x * x / 2;
    double S = 0.0;
    for (int n = 1; n <= N; ++n) {
        S = S + a1;
        a1 *= (-1 * x * x) / ((2 * n + 2) * (2 * n + 3));
    }
    return S;
}

double func(double x, int max_iters = 20, double eps = 1e-4) {
    double a1 = x * x / 2;
    double S1 = 0.0, S2 = 0.0;
    for (int n = 1; n <= max_iters; ++n) {
        S2 += a1;
        if (fabs(S2 - S1) <= eps) {
            break;
        }
        S1 = S2;
        a1 *= (-1 * x * x) / ((2 * n + 2) * (2 * n + 3));
    }
        return (S1 + S2) / 2;
}

void tabulate(double a, double b, double h, double N, double eps = 1e-4) {
    cout << "X\t\tY\t\tS(n)\t\tS(eps)\t\terr" << endl;
    for (double x = a; x <= b; x += h) {
        cout << x << "\t" << func1(x) << "\t" << func(x,N) << "\t" << func(x) << "\t";
        double err = fabs(func1(x) - func(x, N)) / fabs(func1(x)) * 100;
        cout << err << endl;
    }
}

int main()
{
    double x;
    double a = 0.0;
    double b = 1.0;
    double N = 5.0;
    int max_iters = 20;
    double eps = 1e-4;

    for (double N = 5.0; N <= 20; N += 5) {
        double h = (b - a) / (N - 1);
        tabulate(a, b, h, N, eps);
        cout << "=========================================================" << endl;

    return 0;
}