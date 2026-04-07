#include <iostream>
#include <cmath>
using namespace std;
int main() {
double true_value, approx_value;
// Input true and approximate values
cout << "Enter true value: ";
cin >> true_value;
cout << "Enter approximate value: ";
cin >> approx_value;
// Absolute Error
double absolute_error = fabs(true_value - approx_value);
// Relative Error
double relative_error = absolute_error / fabs(true_value);
// Percentage Error
double percentage_error = relative_error * 100;
cout << "\nAbsolute Error = " << absolute_error << endl;
cout << "Relative Error = " << relative_error << endl;
cout << "Percentage Error = " << percentage_error << "%" << endl;
return 0;
}
