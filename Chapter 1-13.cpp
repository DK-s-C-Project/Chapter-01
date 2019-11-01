/* Namespace 명칭 공간에 대하여*/
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
	//using namespace MySpace 를 작성하면 위의 using namespace와 같은 원리로 작동 한다. int 함수 안에서만 사용 한다는 의미다. ㄴ
	cout << "Hello world" << endl;
	cout << dosomething(3 , 4) << endl;
	cout << MySpace::dosomething(5, 6) << endl;
	MySpace2::Innerspace::my_fuction; // 이 경우는 namespace 안에 또다른 namespace를 넣은 경우 임으로 호출 할 때 ::를 두번 넣는다. 간단한 원리

	return 0;
}
// 위의 경우는 dosomething이라는 함수의 이름이 겹치는 경우 함수 이름을 변경하지 않고 계속 사용하기 위해 쓰는 방법이다.
// 실행 코드를 작성 할 때 dosomething 앞에 포함 되어 있는 namespace를 작성해야 내가 원하는 함수가 호출 되어 출력이 된다.
// 당연히 namespace 또한 겹치면 같은 저장 공간안에 포함이 되어 버리므로 namespace 도 이름을 달리하여 별도의 공간에 저장이 되도록 하자.