/* 선언(Declaration)과 정의(Defineion)의 분리 */

#include<iostream>
using namespace std;

int add(int a, int b);// foward declaration --> 뒤에 나올 함수를 미리 정의를 하였다.
int multifly(int a, int b);

int main()
{

	cout << add(1, 2) << endl;
	cout << multifly(3, 4) << endl;
	return 0;

}// 함수가 길어 질 것에 대비 하여 정리를 하기 위해 나누었다.


// Defineion
int add(int a, int b)
{
	return a + b;
}

int multifly(int a, int b)
{
	return a*b;
}

