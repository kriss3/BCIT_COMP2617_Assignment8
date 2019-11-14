// Assignment 8: Complex.h
// Consts and Complex number arithmetics.
// Author:   Krzysztof Szczurowski
// ID: A01013054
// Date: November 14th 2019

#pragma once

class Complex
{
private:
	double real;
	double img;

public:
	Complex(double real=1.0, double img=0.0); // default ctor

	double getReal() const;
	void setReal(const double &real);

	double getImg() const;
	void setImg(const double &img);

	Complex& plusEq(const Complex&);
	Complex& minusEq(const Complex&);
	void display(void);

};