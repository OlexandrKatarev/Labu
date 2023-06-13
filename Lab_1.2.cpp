#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 20.1;
  double b = 1.07;
  double x;
  cout << "Write your x " << endl;
  cin >> x;

  double res = ( 1 - tan( a * x ) ) / ( b - sqrt( x + 1 ));
  

  cout << "Result is " << res << endl;

  return 0;
}