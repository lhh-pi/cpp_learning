#include <iostream>

using namespace std;

double getAverage(int arr[], int);
//double getAverage(int arr[], int size);

int* addOne(int* p, int size);

int main()
{
	//int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int nums[10] = {1,2};

	//for (int i = 0; i < 10; i++)
	//	nums[i] = i + 1;
	//int* p = nums;
	//cout << p << endl << *p << '\t' << *(p + 4) << endl;
	//cout << size(nums) << endl;

	//cout << getAverage(nums, 10) << endl;
	//int* p = addOne(nums, 10);
	//for (int i = 0; i < 10; i++)
	//	cout << p[i] << endl;

	//const char* names[4] = {
	//	"zara Ali",
	//	"Hina Ali",
	//	"Nuha Ali",
	//	"Sara Ali",
	//};

	//const char* s = "kaidh";
	//s = "llll";
	//cout << s[1] << endl;

	return 0;
}

//double getAverage(int* p, int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += *(p + i);
//	}
//	return double(sum) / size;
//}

double getAverage(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return double(sum) / size;
}

int* addOne(int* p, int size)
{
	static int r[10] = {};
	for (int i = 0; i < size; i++)
	{
		r[i] = *(p + i) + 1;
	}
	return r;
}
