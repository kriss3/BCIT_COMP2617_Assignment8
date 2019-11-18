// Assignment 8: Complex.h
// Consts and Complex number arithmetics.
// Author:   Krzysztof Szczurowski
// ID: A01013054
// Date: November 14th 2019

#pragma once

class Complex
{
private:
	//real part of the Complex number;
	double real;
	//imaginary part of the Complex number;
	double img;

public:
	//ctor for the Complex number;
	Complex(double real=1.0, double img=0.0); // default constructor taking default values;

	//getter function for the real part of the Complex number;
	double getReal() const;
	//setter function for the real part of the Complex number;
	void setReal(const double &real);

	//getter funciton for the imaginary part of the Complex number;
	double getImg() const;
	//setter function for the imaginary part of the Complex number;
	void setImg(const double &img);

	//addition function of the Complex number;
	//takes a Compex number by reference and returns a reference to a Complex number;
	Complex& plusEq(const Complex&);

	//sumbtraction function of the Complex number;
	//takes a Compex number by reference and returns a reference to a Complex number;
	Complex& minusEq(const Complex&);

	//Complex number display function;
	void display(void) const;
};