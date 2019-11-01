#include<iostream> // cout,cin,endl --> std 이름 공간안에 저장이 되어 있다
using namespace std; // 위의 것을 사용하기 위해 정의를 내려 주었다. 

int main()
{
	/*int x = 181219;
	double pi = 3.14;
	cout << "Hello world\n";// 출력하고 싶은 내용을 Cout를 통해 출력한다. 
	cout << "18.12.19일을 기억하자 지금은 열심히 해야 할 때\n";
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
cout의 여러 가지 기능들(출력)

cout << "abc" << "\t" << "def";
\t는 Tab을 의미 한다. 문장을 작성 할 때 공간을 넣고 싶으면 그냥 띄어 쓰기를 해도 되지만 /t를 사용 할 경우 자동으로 줄 맞춤을 해준다. 복잡한 표어 또는 달력 등의 예제를 풀 때 사용하면 좋다.
\n은 new line 즉 새로운 줄을 의미한다. 자주 사용하는 것이다. 그냥 적어봄
\a는 audio의 약자로 소리를 출력 한다. 


cin의 여러가지 기능들(입력)

*/