#include<iostream>
#include<Windows.h>
#include<time.h>

using std::cout;
using std::endl;

void main()
{
	srand(time(NULL));

	cout << "1. 1 ���� 1000������ �������ڸ� �������� ��ƶ�:" << endl;
	for (int n = 1; n <= 10; n++)
	{
		int count_n = 0;
	}

	for (int i = 1; i <= 10;  i++)
	{
		
		int num = rand() % 1000 + 1;
		cout << num << endl;
		
		
	} 

}