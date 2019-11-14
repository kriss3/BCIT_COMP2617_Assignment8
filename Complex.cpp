// Assignment 8: Complex.cpp
// Consts and Complex number arithmetics.
// Author:   Krzysztof Szczurowski
// ID: A01013054
// Date: November 14th 2019


#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(double real, double img) : real(real), img(img)
{
}

double Complex::getReal() const
{
	return real;
}

void Complex::setReal(const double &real) 
{
	this->real = real;
}

double Complex::getImg() const 
{
	return img;
}

void Complex::setImg(const double &img) 
{
	this->img = img;
}

Complex& Complex::plusEq(const Complex& pC)
{
	this->real = real + pC.real;
	this->img = img + pC.img;
	return (*this);
}

Complex& Complex::minusEq(const Complex& mC)
{
	this->real = real - mC.real;
	this->img = img - mC.img;
	return (*this);
}

void Complex::display(void) 
{
	cout.precision(4);
	cout << fixed << "(" << this->getReal() << " , " << this->getImg() << ")";
}