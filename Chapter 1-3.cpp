/* - 변수와의 첫 만남
객체 object oop 노트를 보며 상세하게 볼 것! --> 메모리에 담겨 있다.
변수 variables
Left values 와 Right values -->  메모리 주소로 프로그래머가 접근 할 수 있냐 없냐로 구분이 지어 진다.
초기화initializatuin 와 대입 assaignment
초기화를 안 했을 때 문제점
*/

#include<iostream>
using namespace std;

int main()
{ 
	int x = 23; // x는 메모리에 들어있는 저장 공간 중 하나이며 이 저장 공간안에 저장을 할 수 있다.
	x = 170311; // assignment x의 값을 대입 하는 것. --> x 라는 변수 이름의 저장 공간에170311이란 값을 대입 한 것.
	// L-value 와 R-value /  L- value는 주소의 값을 가지고 있는 경우이다 R-value의 경우는 임시 저장 값에 대한 경우이다.
	 
	cout << x << endl;
	cout << &x << endl;// x라는 변수가 실제로 어떤 주소를 가지고 있는 지 (메모리 지정 주소) 출력 하는 값.
	
	
	
	return 0;
} 
/*
int main()
{
  int x;

  cout << x << endl; // 이 경우 Debug 모드의 경우 실행이 안되지만 Release 모드에서는 실행 이 된다
                        Relase 모드는 초기화 값을 임의로 지정 할 경우가 있기 때문 
						나중가면 ㄹㅇ ㅈ 될 수 있으니 늘 초기화 하는 습관을 들이자!!

*/

// 새로 할당 받은 메모리가 알고 보니 앞의 프로그렘에서 사용 후 남은 메모리가 남아있는 경우가 있는데 
// 이를 두고 쓰레기 값이라고 한다. --> 변수는 늘 초기화를 해야 한다