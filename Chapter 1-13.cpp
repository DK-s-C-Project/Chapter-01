/* Namespace ��Ī ������ ���Ͽ�*/
#include<iostream>
using namespace std;
namespace MySpace
{
	int dosomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	namespace Innerspace
	{
		int my_fuction()
		{
			return 0; }
	}
}

int dosomething(int a, int b)
{
	return a*b;
}

int main()
{
	//using namespace MySpace �� �ۼ��ϸ� ���� using namespace�� ���� ������ �۵� �Ѵ�. int �Լ� �ȿ����� ��� �Ѵٴ� �ǹ̴�. ��
	cout << "Hello world" << endl;
	cout << dosomething(3 , 4) << endl;
	cout << MySpace::dosomething(5, 6) << endl;
	MySpace2::Innerspace::my_fuction; // �� ���� namespace �ȿ� �Ǵٸ� namespace�� ���� ��� ������ ȣ�� �� �� ::�� �ι� �ִ´�. ������ ����

	return 0;
}
// ���� ���� dosomething�̶�� �Լ��� �̸��� ��ġ�� ��� �Լ� �̸��� �������� �ʰ� ��� ����ϱ� ���� ���� ����̴�.
// ���� �ڵ带 �ۼ� �� �� dosomething �տ� ���� �Ǿ� �ִ� namespace�� �ۼ��ؾ� ���� ���ϴ� �Լ��� ȣ�� �Ǿ� ����� �ȴ�.
// �翬�� namespace ���� ��ġ�� ���� ���� �����ȿ� ������ �Ǿ� �����Ƿ� namespace �� �̸��� �޸��Ͽ� ������ ������ ������ �ǵ��� ����.