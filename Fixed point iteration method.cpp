#include <iostream>
#include <cmath>
using namespace std;
// g(x) function
double g(double x) {
return (cos(x) + 1) / 3;
}
int main() {
double x0 = 0; // Initial guess
double x1;
int i;
cout << "Iteration\tRoot Approximation\n";
for (i = 1; i <= 5; i++) { // 5 iterations
x1 = g(x0);
cout << i << "\t\t" << x1 << endl;
x0 = x1; // Update value
}
cout << "\nApproximate root = " << x1 << endl;
return 0;
}
