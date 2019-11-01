#include<iostream>
using namespace std;
#define LIKE_APPLE

int main()
{
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif// 선언이 되어 있으면 이거

#ifndef LIKE_APPLE// #ifndef none이 포함이 되어 있다!!!! 
	cout << "Orange" << endl;
#endif // 선언이 되어 있지 않으면 이것이 출력이 된다.
	// 멀티 플렛폼 소프트웨어를 계발하게 되면 이 부분을 엄청 사용하게 된다.
	return 0;
}
// 위에 #define을 지우냐 지우지 않느냐의 차이로 apple / orange가 출력이 된다.
// if 문과 연관이 있으니 같이 공부 할 수 있도록!! --> 자연스럽게 이해가 될 것이다. 