#include<iostream>
using namespace std;
#define LIKE_APPLE

int main()
{
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif// ������ �Ǿ� ������ �̰�

#ifndef LIKE_APPLE// #ifndef none�� ������ �Ǿ� �ִ�!!!! 
	cout << "Orange" << endl;
#endif // ������ �Ǿ� ���� ������ �̰��� ����� �ȴ�.
	// ��Ƽ �÷��� ����Ʈ��� ����ϰ� �Ǹ� �� �κ��� ��û ����ϰ� �ȴ�.
	return 0;
}
// ���� #define�� ����� ������ �ʴ����� ���̷� apple / orange�� ����� �ȴ�.
// if ���� ������ ������ ���� ���� �� �� �ֵ���!! --> �ڿ������� ���ذ� �� ���̴�. 