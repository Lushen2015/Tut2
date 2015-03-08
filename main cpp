#include "Fraction.h"
#include <iostream>
#include <string>
using namespace std;

void requestInput(Fraction &frac) {
int temp;
cout << "Please input a numerator value";
cin >> temp;
frac.setNumerator(temp);

cout << "Please input a denominator value";
cin >> temp;
frac.setDenominator(temp);
};

int main() {
Fraction A;
Fraction B;
requestInput(A);
requestInput(B);
int option;
cout << "Please choose an option A <operator> B" << endl << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl;
cin >> option;
switch (option)
{
case (1) : A + B;
A.print();
break;
case (2) : A - B;
A.print();
break;
case (3) : A * B;
A.print();
break;
case (4) : A / B;
A.print();
break;
default:
break;
}

return 0;

};
