#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
   double x, y, z;
   cout << "Input x: ";
   cin >> x;
   cout << "Input y: ";
   cin >> y;
   cout << "Input z: ";
   cin >> z;

   // Обчислення a.
   double numerator = x + 2 * y + 3 * z;
   double denominator = 1 + abs(x - y);
   double term1 = pow(numerator / denominator, 2);
   double term2 = log(2 + pow(cos(M_PI * x), 2));
   double term3 = exp(-(x * x + y * y));
   double a = pow(term1 * term2 * term3, 3);

   // Обчислення b.
   double sinTerm = pow(sin(2 * x - (3.0 / (2 * y + M_PI * z))), 3);
   double fractionDenominator = y * y + (x * x - y * y) / (1 + 2.2 * z * z);
   double b = tan(M_PI / 8) + sinTerm / fractionDenominator;

   cout << "a = " << a << endl;
   cout << "b = " << b << endl;

   return 0;
}
