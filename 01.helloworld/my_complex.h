#ifndef __MYCOMPLEX__
#define __MYCOMPLEX__
class complex
{
public:
	complex(double r = 0., double i = 0.) : re(r), im(i) { };  // ���캯��

	// �������غ�������(��Ա����)
	complex& operator += (const complex&);

	double real() const { return re; }  // inline function
	double imag() const { return im; }  // ���ﺯ�����const�������������ʵ����const complex�����κβ��ı�������ݵĺ�����Ӧ�� const ����

private:
	double re, im;  // ������ģ��
	
	friend complex& __doapl(complex*, const complex&);  // ��__doapl����Ϊ��Ԫ�������Ե���complex�����˽�г�Ա

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


inline complex&  // ����local����Ϳ��������÷�ʽ���ݷ��أ���������Ϊinline���������ɱ�����ȷ���Ƿ���inline����
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