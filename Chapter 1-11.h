
//#pragma once // 헤더를 만들면 자동적으로 적어 넣읍시다. using namespace 처럼.
#ifndef MY_ADD
#define MY_ADD
int add(int a, int b)
{
	return a+b;
}

#endif

/*

#ifdef, #define, #endif의 역활은 Chapter1-11.h이 연속적으로 정의 되는 것을 막기 위해 사용 되었다.
Chapter1-12의 경우 또다른 헤더 파일인 Chapter1-11 dosomething에서 Chapter1-1.h 가 이미 한번 정의 되어 있었도
본문에서도 한번 정의가 되어 있어 결과 적으로는 2번 정의를 한 셈이 된다. 이 결과에서 발생하는 에러를 막기 위해
위와 같은 조치가 취해졌다. --> 이것을 묶는 기능이 #pragma once이다. 왜 난 안 주냐 ㅅㅂ


*/