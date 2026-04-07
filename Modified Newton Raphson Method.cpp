#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
return 3*x - cos(x) - 1;
}
double df(double x) {
return 3 + sin(x);
}
int main() {
double x0 = 0.5; // Initial guess
double x1;
double fprime = df(x0); // Compute derivative once
int i;
cout << "Iteration\tRoot Approximation\n";
for(i = 1; i <= 5; i++) {
x1 = x0 - f(x0)/fprime; // Use fixed derivative
cout << i << "\t\t" << x1 << endl;
x0 = x1;
}
cout << "\nApproximate root = " << x1 << endl;
return 0;
}
