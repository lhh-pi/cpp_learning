//#include "string.h"
#include <iostream>
#include "my_string.h"



using namespace std;

int fun() {
	static int a = 0;
	return ++a;
}

int main()
{
	//String s1("hello");
	//String s2("world");

	//String s3(s2);
	//cout << s3 << endl;

	//s3 = s1;
	//cout << s3 << endl;
	//cout << s2 << endl;
	//cout << s1 << endl;
	for (int i = 0; i < 10; ++i) {
		cout << i << ':' << fun() << endl;
	}
	
}
