// EulerProject_005.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?
*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num = 2520, i = 2;
	
	while ( i <= 20 ) {
		if ( num % i != 0 ) {
			num++;
			i = 2;
		}
		else if ( num % i == 0 ) {
			i++;
		}
	}

	cout << num << endl; //232792560

    return 0;
}

