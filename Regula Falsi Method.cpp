#include <iostream>
#include <cmath>
using namespace std;
// Function definition
double f(double x) {
return 3*x - cos(x) - 1;
}
int main() {
double a = 0, b = 1; // Initial guesses
double c;
int i;
if (f(a) * f(b) >= 0) {
cout << "Invalid initial guesses!" << endl;
return 0;
}
cout << "Iteration\tRoot Approximation\n";
for (i = 1; i <= 5; i++) { // 5 iterations
c = (a*f(b) - b*f(a)) / (f(b) - f(a));
cout << i << "\t\t" << c << endl;
if (f(c) == 0)
break;
else if (f(a) * f(c) < 0)
b = c;
else
a = c;
}
cout << "\nApproximate root = " << c << endl;
return 0;
}
