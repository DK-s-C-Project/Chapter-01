/* Defines the entry point for the console applicatiom*/

#include<iostream>
#include<algorithm>// 이런 라이브러리도 있다. 다른 라이브러리도 한번 알아보자.
using namespace std;


#define MY_NUMBER 7777777777777777777 // 매크로라고 부른다. 대부분의 매크로 #define은 대문자로 작성한다. ps. 20자리 숫자까지 출력이 가능하다. 한계 인듯. 
#define MY_LATTER "Hello world"// 글자도 가능하다. 매크로는 단지 교체해주는 작업에 불과 하다. 기억하자.
#define MAX(a,b) ((a>b) ? a:b)// (a>b) ? a:b 으로 하면 즉 괄호로 씌여주지 않으면 에러가 난다. 왜 나는지는 잘 모르겠다.
// #define에서 에러가 발생 할 경우 및의 함수에 그대로 복사하여 넣어보자. 그러면 왜 에러가 발생하는지 또는 에러가 발생 할 지 유추를 할 수 는 있다. 물론 지금 기준에서는 모르겠다.
// #define이 매크로를 정의하는 것이였다. 4년만에 처음 알았다. ㅋㅋㅋㅋㅋ 군대 간 2년 을 빼도 참.. 그래도 지금이라도 알아서 다행이다. ㅎㅎ
int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_LATTER << endl;
	cout << MAX(1, 2) << endl;
	cout << std::max(1 + 3, 2) << endl;
	// max라는 함수를 사용 할 때 위에 algorithm이라는 라이브러리를 인용 했다. #define MAX에서는 단순히 수의 크기에 따라 분류만 해주지만 algorithm은 연산까지 포함을 해준다.
	/* 요즘 코딩은(18년도 7월 기준) 매크로를 거의 사용 하지 않는 다고 한다. 처음엔 몰랐는데 라이브러리를 보니까 굳이 사용 안하는 이유을 알 것 같다. 위와 같이 훨씬 좋은 기능이 있는데
	   뭐하러 귀찮게 매크로를 사용하겠는가. 하지만 난 초보자이고 언제 매크로를 쓸지 모르니 기억을 해두어야 겠다. */
	return 0;
}