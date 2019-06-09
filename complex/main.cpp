
#include <iostream>

#include "complex.h"

using namespace std;

int main(void)
{
	MyComplex c1(1, 10);

	cout << "real="<< c1.real() << ",img="<<c1.imag()<<endl;

	MyComplex c2(2, 20);

	//call copy constructor, reflict with private
	//MyComplex c3 = c1 + c2;
	//cout << "c3, real="<< c3.real() << ",img="<<c3.imag()<<endl;

	//call default constructor, and then call operator=, reflict with private
	//MyComplex c4;
	//c4 = c1 + c2;
	//cout << "c4, real="<< c4.real() << ",img="<<c4.imag()<<endl;

	
	MyComplex c5(1, 100);
	MyComplex c6(1, 100);
	
	cout << "c1, real="<< c1.real() << ",img="<<c1.imag()<<endl;
	

	c5.testConst(c5);

	return 0;
}
