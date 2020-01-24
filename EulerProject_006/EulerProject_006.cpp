// EulerProject_006.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
/*
1부터 10까지 자연수를 각각 제곱해 더하면 다음과 같습니다 (제곱의 합).

12 + 22 + ... + 102 = 385
1부터 10을 먼저 더한 다음에 그 결과를 제곱하면 다음과 같습니다 (합의 제곱).

(1 + 2 + ... + 10)2 = 552 = 3025
따라서 1부터 10까지 자연수에 대해 "합의 제곱"과 "제곱의 합" 의 차이는 3025 - 385 = 2640 이 됩니다.

그러면 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이는 얼마입니까?
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int funcRecursive1(int number); // 합의 제곱
int funcRecursive2(int number); // 제곱의 합

int main()
{
	int sum1 = 0, sum2 = 0;
	int num = 100;

	sum1 = funcRecursive1(num);
	sum1 *= sum1;
	sum2 = funcRecursive2(num);

	cout << sum1 << " - " << sum2 << " = " << sum1 - sum2 << endl; // 25164150

    return 0;
}

int funcRecursive1(int number)
{
	if ( number < 2 ) return 1;

	return number + funcRecursive1(number - 1);
}

int funcRecursive2(int number)
{
	if ( number < 2 ) return 1;

	return number * number + funcRecursive2(number - 1);
}
