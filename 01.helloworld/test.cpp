#include <iostream>
#include<string>
#include <bitset>
#include <vector>
using namespace std;
//
//class imformation;
//
//class imformation {
//public:
//	imformation(const string& g, const int& a = 0) : gender(g), age(a) {
//		cout << "imformation: " << gender << ',' << age << endl;
//	}
//
//	const int& getage() const { return age; }
//	const string& getgender() const { return gender; }
//
//private:
//	int age;
//	string gender;
//};
//
//
//class people {
//public:
//	people(const string& g, const int& a = 0) : gender(g), age(a) {
//		cout << "I'm a " << gender << ',' << age << " years old!" << endl;
//	}
//	people(const imformation& im) : gender(im.getgender()), age(im.getage()) {
//		cout << "方式二调用" << endl;
//		cout << "I'm a " << gender << ',' << age << " years old!" << endl;
//	}
//protected:
//	int age;
//	string gender;
//};
//
//
//class student: public people {
//public:
//	student(const imformation& im, const int& gra) : imfor(im), grade(gra), people(im.getgender(), im.getage()) {
//		cout << "I'm a student, " << grade << " grade." << endl;
//	}
//	const int& get_age() const { return age; }
//private:
//	imformation imfor;
//	int grade;
//};
//
//int main() {
//	imformation im("boy", 16);
//	student s(im, 5);
//	cout << s.get_age() << endl;
//	int age = s.get_age();
//	age = 0;
//	cout << age << ' ' << s.get_age() << endl;
//}

//template<typename T, template<typename U> typename Container>
//class XCls
//{
//private:
//    Container<T> c;
//};
//#include <list>
//template<typename T>
//using Lst = list<T, allocator<T>>;
//
//int main() {
//    XCls<string, Lst> mylist;
//}


//// 语法糖:  ... / auto / ranged-base for
//void print(){}
//template <typename T, typename... Types>
//void print(const T& firstArg, const Types&... args) {
//	cout << firstArg << endl;
//	print(args...);
//}
//// print(7.5, "hello", bitset<16>(377), 42);

int main() {
	vector<double> vec = { 1,2,3,4,5,6,7,8,9 };
	cout << "step 1" << endl;
	for (double item : vec) {
		item;
		cout << item << endl;
	}
	cout << "step 2" << endl;
	for (auto& item : vec) {
		item ++;
		cout << item << endl;
	}
	cout << "step 3" << endl;
	for (double item : vec) {
		cout << item << endl;
	}

}