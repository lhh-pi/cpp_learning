#ifndef __MY_STRING__
#define __MY_STRING__

class String
{
public:
	String(const char* cstr = 0);
	// Big Three（三个特殊函数）
	String(const String& str);  // 拷贝构造
	String& operator = (const String& str);  // 拷贝赋值
	~String();  // 析构函数：类死亡时被调用

	char* get_c_str() const { return m_data; }

private:
	char* m_data;

};

#include <cstring>
using namespace std;

inline 
String::String(const char* cstr) {
	if (cstr) {
		m_data = new char[strlen(cstr) + 1];
		strcpy_s(m_data, strlen(cstr) + 1, cstr);
	}
	else
		*m_data = '\0';
}

inline 
String::~String() {
	delete[] m_data;
}

inline 
String::String(const String& str) {
	m_data = new char[strlen(str.m_data) + 1];
	strcpy_s(m_data, strlen(str.m_data) + 1, str.m_data);
}

inline String&
String::operator = (const String& str) {
	if (m_data == str.m_data) return *this;
	delete[] m_data;
	m_data = new char[strlen(str.m_data) + 1];
	strcpy_s(m_data, strlen(str.m_data) + 1, str.m_data);
	return *this;
}

#include <iostream>

ostream& operator << (ostream& os, const String& str) {
	os << str.get_c_str();
	return os;
}

#endif // !__MY_STRING__

