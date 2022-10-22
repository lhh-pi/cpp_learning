#include <iostream>
#include<string>

using namespace std;

struct Book
{
	string title;
	string author;
	int book_id;
};

int main()
{
	Book book1 = {"python", "shg", 1};
	book1.title += "kkk";
	cout << book1.title << ' ' << book1.author << ' ' << book1.book_id << endl;

	struct Book* struct_pointer = NULL;
	struct_pointer = &book1;
	cout << struct_pointer->book_id << endl;
}