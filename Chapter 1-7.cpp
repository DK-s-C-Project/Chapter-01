/* Local Scope  지역 범위*/
#include<iostream>
using namespace std;

int main()
{

	{
		// 대괄호 안에 뜬금 없이 괄호를 넣어도 된다. 
		// 대괄호는 영역을 나누는 것이다.

	}
	int x = 0;
	int x(0);// 똑같이 0을 초기화 한 것이다.
	
	return 0;
}// 중괄호 안에 선언 된 변수는 괄호 밖을 넘어가면 그 영향이 사라진다. 

int main()
{

	int x = 1;
	int x = 2;

}// --> 이 경우는 변수가 겹치기 때문에 오류가 있는 문장이다

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{

	int x = 1;// 뒤에 나오는 x와는 별개의 공간이다.

	{
		int x = 5;

	}

}// --> 이 경우는 대괄호로 영역을 나누었기 때문에 옳바른 문장이다.

// 괄호를 벗어나는 순간 완전이 다른 메모리이기 때문에 변수가 같다고 해서 같은 메모리에 저장 되는 것이 아니다!!!!

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int x = 29;

	cout << x << "" << &x << endl; // &x의 경우 x의 메모리 주소를 출력 할 때 사용 한다.



}