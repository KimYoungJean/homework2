#include<iostream>
#include<Windows.h>
#include<time.h>

using std::cout;
using std::endl;

void main()
{
	srand(time(NULL));

	cout << "1 ���� 5������ �������ڸ� �������� ��ƶ�:";
	cout << rand() % 5 + 1 << endl;
	cout << " 6���� 19������ �������ڸ� �������� ��ƶ�:";
	cout << rand() % 14 + 6 << endl;
	cout << " 23���� 189������ �������ڸ� �������� ��ƶ�:";
	cout << rand() % 167 + 23 << endl;

}