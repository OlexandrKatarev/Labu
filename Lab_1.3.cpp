#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
private:
    double a_;
    double b_;

public:
    const double getA() const
    {
        return a_;
    }

    double setA(const double& a)
    {
        return a_ = a;
    }

    const double getB() const
    {
        return b_;
    }

    double setB(const double& b)
    {
        return b_ = b;
    }
    Calculator(const double& a, const double& b) : a_(a), b_(b) {}
    const double kalk(const double& x) const {
        return (1 - tan(a_ * x)) / (b_ - sqrt(x + 1));
    }
    const double operator()(const double& x) const
    {
        return this-> kalk(x);
    }

};

int main()
{
    Calculator p(20.1, 1.07);
    double x;
    cout << "Write your x " << endl;
    cin >> x;



    cout << "Result is " << p.kalk(x) << endl;

    return 0;
}