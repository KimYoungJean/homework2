#include<iostream>
#include<Windows.h>
#include<time.h>

using std::cout;
using std::endl;

void main()
{
	srand(time(NULL));

	cout << "1. 1 부터 1000까지의 랜덤숫자를 정수형에 담아라:" << endl;
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