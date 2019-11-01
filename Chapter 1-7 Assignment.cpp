#include<iostream>
using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl;// #2

}

int main()
{
	int x = 8;

	cout << x << endl;// #1
	doSomething(x);
	cout << x << endl;// #3

	return 0;
} 

// 출력 값은 8,123,8이다.
/*

일단 Debug를 해보면 어찌하여 1,2,3 순번으로 출력이 되는 것인지 알게 된다. 먼저 선언 함수인 int가 먼저 출력이 되고 그 다음 doSomething(x)로 인해 viod 함수의 값이 출력이 된다.
그 다음으로 남은 문장인 cout << x << endl; 이 출력을 하게 된다. 
#1번이 '8'로 출력 되는 이유는 int x = 8 이라고 선언을 하였기 때문에 '8'이라는 값이 출력이 된다.
#2번이'123'으로 출력이 되는 이유는 void dosomething에서 x=123이라고 선언을 했기 때문이다.
#3번이 '8'로 출력이 되는 이유는 #1번과 동일하다. doSomething(x);이 들어 갔다고 해서 x의 저장 값이 변경 되지 않는다. 
왜냐하면 doSomething(x)을 지우고 Debug를 했을 경우 123만 누락하고 출력이 되기 때문에 이 결과 값을 가지고 추론을 하자면 위 변수는 단지 Void에 있는 함수를 출력하기 위한 문장임을
알 수 있다.



*/