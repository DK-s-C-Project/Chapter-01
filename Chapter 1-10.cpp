/* ����(Declaration)�� ����(Defineion)�� �и� */

#include<iostream>
using namespace std;

int add(int a, int b);// foward declaration --> �ڿ� ���� �Լ��� �̸� ���Ǹ� �Ͽ���.
int multifly(int a, int b);

int main()
{

	cout << add(1, 2) << endl;
	cout << multifly(3, 4) << endl;
	return 0;

}// �Լ��� ��� �� �Ϳ� ��� �Ͽ� ������ �ϱ� ���� ��������.


// Defineion
int add(int a, int b)
{
	return a + b;
}

int multifly(int a, int b)
{
	return a*b;
}

