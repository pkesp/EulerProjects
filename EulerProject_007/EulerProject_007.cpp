// EulerProject_007.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.

이 때 10,001번째의 소수를 구하세요.
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num = 2, i = 2;
	int count = 0;

	while ( true ) {
		if ( count == 10001 ) break;
		if ( num % i == 0 ) {
			if ( num == i ) {
				//cout << num << endl; // 확인용
				count++;
			}
			num++;
			i = 2;
			continue;
		}
		i++;
	}
	cout << num - 1 << endl; //104743
    return 0;
}

