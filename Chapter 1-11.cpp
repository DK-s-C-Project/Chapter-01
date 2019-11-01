/* Header file 만들기*/
// 파일을 쪼개는 법도 알아보자 --> 한 파일 안에 여러 함수를 넣으면 보기 매우 않 좋다.
// 파일을 분리한 이유은 다른 곳에서 다시 사용 하기 위함이다.

#include <iostream>
#include "Chapter 1-11.h"// 내가 만든 헤더 파일에서 불러 왔다.  --> 헤더 파일을 찾을 때 폴더로 묶고 불러와야 나중에 편리 하다. 
using namespace std;

//int add(int a, int b);


int main()
{
	cout << add(1, 2) << endl;
	return 0;

}