#include <iostream>

#include "complex.h"

using namespace std;
MyComplex& MyComplex::operator +=(const MyComplex &src)
{
	this->re += src.real();
	this->im += src.imag();

	return *this;
}

#if 0
MyComplex& MyComplex::operator =(const MyComplex &src)
{
	this->re = src.real();
	this->im = src.imag();

	return *this;
}
#endif

MyComplex& MyComplex::operator -=(const MyComplex &src)
{
	this->re = this->re - src.re;
	this->im = this->im - src.im;

	return *this;
}

MyComplex MyComplex::operator +(const MyComplex& x)
{
     return MyComplex(this->real() + x.real(), this->imag()+x.imag());
}

int MyComplex::testConst (const MyComplex &x) const
{
	cout <<"x.real="<<x.real()<<",x.imag="<<x.imag();
}