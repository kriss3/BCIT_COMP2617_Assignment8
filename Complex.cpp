// Assignment 8: Complex.cpp
// Consts and Complex number arithmetics.
// Author:   Krzysztof Szczurowski
// ID: A01013054
// Date: November 14th 2019


#include <iostream>
#include "Complex.h"

using namespace std;

//ctor for the Complex number using MIL
Complex::Complex(double real, double img) : real(real), img(img)
{
}

//getter funciton for the real part fo the complex number;
double Complex::getReal() const
{
	return real;
}

//setter function for the real part of the  complex  number;
void Complex::setReal(const double &real) 
{
	this->real = real;
}

//getter function for the imaginary part of the compex number;
double Complex::getImg() const 
{
	return img;
}

//setter function for the imaginary part of the  complex  number;
void Complex::setImg(const double &img) 
{
	this->img = img;
}

//addition operation on the complex number;
//taking Complex object and returning a pointer to a current Complex object;
Complex& Complex::plusEq(const Complex& pC)
{
	this->real = real + pC.real;
	this->img = img + pC.img;
	return (*this);
}

//subtraction operation on the complex number;
//taking Complex object and returning a pointer to a current Complex object;
Complex& Complex::minusEq(const Complex& mC)
{
	this->real = real - mC.real;
	this->img = img - mC.img;
	return (*this);
}

//functon to display real and imaginary part of the Complex number;
void Complex::display(void) const
{
	cout.precision(4);
	cout << fixed << "(" << this->getReal() << " , " << this->getImg() << ")";
}