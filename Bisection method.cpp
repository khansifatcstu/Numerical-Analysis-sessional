#include <iostream>
#include <cmath>
using namespace std;
// Define the function f(x) = 3x - cos(x) - 1
double f(double x) {
return 3*x - cos(x) - 1;
}
// Bisection Method
double bisection(double a, double b, double tolerance, int
maxIterations) {
if (f(a) * f(b) >= 0) {
cout << "Bisection method fails. f(a) and f(b) must have opposite signs.\n";
return 0;
}
double c;
cout << "Iteration\t a\t\t b\t\t c\t\t f(c)\n";
for (int i = 1; i <= maxIterations; i++) {
c = (a + b) / 2;
cout << i << "\t\t " << a << "\t " << b << "\t " << c <<
"\t " << f(c) << endl;
// Check stopping condition
if (fabs(f(c)) < tolerance) {
cout << "\nRoot found within tolerance.\n";
return c;
}
// Update interval
if (f(a) * f(c) < 0)
b = c;
else
a = c;
}
cout << "\nMaximum iterations reached.\n";
return c;
}
int main() {
double a = 0, b = 1, tolerance = 1e-6;
int maxIterations = 50;
double root = bisection(a, b, tolerance, maxIterations);
cout << "\nApproximate Root = " << root << endl;
return 0;
}
