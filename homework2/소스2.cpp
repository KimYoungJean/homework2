#include<iostream>
#include<Windows.h>
#include<time.h>

using std::cout;
using std::endl;

void main()
{
	srand(time(NULL));

	cout << "1 부터 5까지의 랜덤숫자를 정수형에 담아라:";
	cout << rand() % 5 + 1 << endl;
	cout << " 6부터 19까지의 랜덤숫자를 정수형에 담아라:";
	cout << rand() % 14 + 6 << endl;
	cout << " 23부터 189까지의 랜덤숫자를 정수형에 담아라:";
	cout << rand() % 167 + 23 << endl;

}