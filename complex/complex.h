//Guard define
#ifndef _MyComplex_H_
#define _MyComplex_H_


class MyComplex
{
public:
    MyComplex(double real = 0, double im = 0) 
        :re(real),im(im)//initialize list
        {}
        
    double real()  const {return re;} //const
    double imag() const {return im;}

    //return by reference
    MyComplex& operator+= (const MyComplex &src);
    //MyComplex& operator= (const MyComplex &src);

    MyComplex& operator -=(const MyComplex &src);

    MyComplex operator +(const MyComplex& x);

    int testConst(const MyComplex &x) const;
     
private:
    double re;
    double im;

    //disable copy constructor 
    MyComplex(const MyComplex &);

    //disable operator=
    MyComplex& operator=(const MyComplex &src);
};


#endif