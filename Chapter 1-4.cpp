#include<iostream> // cout,cin,endl --> std �̸� �����ȿ� ������ �Ǿ� �ִ�
using namespace std; // ���� ���� ����ϱ� ���� ���Ǹ� ���� �־���. 

int main()
{
	/*int x = 181219;
	double pi = 3.14;
	cout << "Hello world\n";// ����ϰ� ���� ������ Cout�� ���� ����Ѵ�. 
	cout << "18.12.19���� ������� ������ ������ �ؾ� �� ��\n";
	cout << "x is " << x << endl << "pi is " << pi << endl;
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef";
	cout << "\a";*/

	int x = 1;

	cout << "Be for your input x was " << x << endl;
	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;

}





/*
cout�� ���� ���� ��ɵ�(���)

cout << "abc" << "\t" << "def";
\t�� Tab�� �ǹ� �Ѵ�. ������ �ۼ� �� �� ������ �ְ� ������ �׳� ��� ���⸦ �ص� ������ /t�� ��� �� ��� �ڵ����� �� ������ ���ش�. ������ ǥ�� �Ǵ� �޷� ���� ������ Ǯ �� ����ϸ� ����.
\n�� new line �� ���ο� ���� �ǹ��Ѵ�. ���� ����ϴ� ���̴�. �׳� ���
\a�� audio�� ���ڷ� �Ҹ��� ��� �Ѵ�. 


cin�� �������� ��ɵ�(�Է�)

*/