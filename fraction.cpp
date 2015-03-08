#include <iostream>
#include <string>
#include <cmath>
#include "Fraction.h"
using namespace std;
void Fraction::simplify(int &numerator_LCM, int &denominator_LCM) {
int i = 1;
int LCM = 1;
while ((i <= abs(numerator_LCM)) || (i <= denominator_LCM)) {
if (((numerator_LCM % i) == 0) || ((numerator_LCM % i) == 0))
LCM = i;
i++;
};
numerator_LCM /= LCM;
denominator_LCM /= LCM;
};
Fraction::Fraction() {
numerator = 0; denom = 1; 
};
void Fraction::print() {
int wholePart = (numerator / denom) - (numerator % denom) / denom; 
int printFractionNumerator = numerator % denom;
int printFractionDenominator = denom;
simplify(printFractionDenominator, printFractionNumerator);
cout << wholePart << "+" << printFractionNumerator << "/" << printFractionDenominator << endl;
};

void Fraction::add(Fraction B) { 
int addDenominator = denom * B.getDenominator(); //new denom
int addNumerator = numerator * B.getDenominator() + B.getNumerator() * denom;
simplify(addNumerator, addDenominator);
};

void Fraction::subtract(Fraction B) { 
int subDenominator = denom * B.getDenominator(); //new denom
int subNumerator = numerator * B.getDenominator() - B.getNumerator() * denom;
simplify(subDenominator, subNumerator);
};

void Fraction::multiply(Fraction B) { 
int multDenominator = denom * B.getDenominator();
int multNumerator = numerator * B.getNumerator();
simplify(multDenominator, multNumerator);
};

void Fraction::divide(Fraction B) {
int divDenominator = denom * B.getNumerator();
int divNumerator = numerator * B.getDenominator();
simplify(divDenominator, divNumerator);
};

void Fraction::setNumerator(int numerator_set) {
numerator = numerator_set;
};

void Fraction::setDenominator(int denominator_set) {
if (denominator_set <= 0) 
return;
else
denom = denominator_set;
};

int Fraction::getNumerator() {
return numerator;
};

int Fraction::getDenominator() {
return denom;
};

Fraction::~Fraction() {
};

Fraction Fraction::operator+(const Fraction &B) {
Fraction temp;

int addDenominator = denom * B.denom;
int addNumerator = numerator * B.denom + B.numerator * denom;
simplify(addNumerator, addDenominator);
temp.setDenominator(addDenominator);
temp.setNumerator(addNumerator);
return temp;
};

Fraction Fraction::operator -(const Fraction &B) {
Fraction temp;

int subDenominator = denom * B.denom;
int subNumerator = numerator * B.denom + B.numerator * denom;
simplify(subNumerator, subDenominator);
temp.setDenominator(subDenominator);
temp.setNumerator(subNumerator);
return temp;
};

Fraction Fraction::operator *(const Fraction &B) {
Fraction temp;

int multDenominator = denom * B.denom;
int multNumerator = numerator * B.numerator;
simplify(multDenominator, multNumerator);
temp.setDenominator(multDenominator);
temp.setNumerator(multNumerator);
return temp;
};

Fraction Fraction::operator /(const Fraction &B) {
Fraction temp;

int divDenominator = denom * B.numerator;
int divNumerator = numerator * B.denom;
simplify(divDenominator, divNumerator);
temp.setDenominator(divDenominator);
temp.setNumerator(divNumerator);
return temp;
};
