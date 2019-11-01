#include<iostream>
using namespace std;
/*int addTwonumbers(int num_a, int num_b)// 매개 변수라고 부른다.--> 서로 종족인 변수들을 묶어 주는 변수임.
{
	int sum = num_a + num_b;

	return sum;

}
int main()
{

	cout << addTwonumbers(1,2) << endl;// 덧셈 식을 덧셈 함수로 만들어서 계산 식을 돌린다. 나중 가면 훨씬 더 복잡한 수식을 사용 할 수 도 있음
	cout << addTwonumbers(1,19) << endl;//agreement 매개 변수에 들어가는 값들을 제공 한다.
	cout << 8 + 13 << endl;
	cout << 9 + 13 << endl;

	return 0;
}


// Hello world를 출력하는 함수를 만들어 보자 --> 사실 받을 인자와 변수가 필요 없지만 예시를 보이기 위해 만들어 본다.

void printHelloworld()
{
	cout << "Hello world" << endl;// Hello world를 출력 해 내기 위한 매개 변수를 만들었고

	return; // --> 넣어도 되고 않 넣어도 된다. return을 하면 무조건 반환을 해서 main으로 돌아가야 한다.
	// 이 밑에 줄에 넣는 코드는 절때 실행이 되지 않는다. --> 반환하는 값이 존재하지 않음으로.
}

int main()
{
	printHelloworld(); // 이곳에서는 출력 인자를 만들어 출력을 한다

	return 0;

}

*/

int addTwonumbers(int a, int b)
{
	return a + b;

}

int main()
{

	//int sum = addTwonumbers(1, 2);// 이런 경우 Compile이 되지 않는다. 

	addTwonumbers(1, 2);
	return 0;
}

//C++은 함수 안에서 또 다른 함수를 선언 할 수 없다.