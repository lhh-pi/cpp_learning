#ifndef __MYCOMPLEX__
#define __MYCOMPLEX__
class complex
{
public:
	complex(double r = 0., double i = 0.) : re(r), im(i) { };  // 构造函数

	// 符号重载函数声明(成员函数)
	complex& operator += (const complex&);

	double real() const { return re; }  // inline function
	double imag() const { return im; }  // 这里函数后的const用来修饰类对象，实际是const complex，对任何不改变对象数据的函数都应加 const 修饰

private:
	double re, im;  // 可以用模板
	
	friend complex& __doapl(complex*, const complex&);  // 将__doapl声明为友元函数，以调用complex类对象私有成员

};

//inline double real(const complex x) { return x.real(); }

//inline double imag(const complex x) { return x.imag(); }

inline complex&
__doapl(complex* ths, const complex& r)
{
	ths->re += r.re;
	ths->im += r.im;
	return *ths;
}


inline complex&  // 不是local对象就可以以引用方式传递返回，可以声明为inline，但最终由编译器确认是否是inline函数
complex::operator += (const complex& r)
{
	return __doapl(this, r);
}


inline complex
operator + (const complex& x, const complex& y)
{
	return complex(x.real() + y.real(), x.imag() + y.imag());
}

inline complex 
operator + (const complex& x, double& y)
{
	return complex(x.real() + y, x.imag());
}

inline complex
operator + (double& x, complex& y) 
{
	return complex(x + y.real(), y.imag());
}

#include <iostream>
using namespace std;

inline ostream&
operator << (ostream& os, const complex& x)
{
	return os << x.real() << '+' << x.imag() << 'i';
}

#endif