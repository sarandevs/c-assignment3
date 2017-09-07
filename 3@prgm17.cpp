#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c, y1, y2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        y1 = (-b + sqrt(discriminant)) / (2*a);
        y2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "y1 = " << y1 << endl;
        cout << "y2 = " << y2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        y1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "y1 = y2 =" << y1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "y1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "y2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
	return 0;
}
