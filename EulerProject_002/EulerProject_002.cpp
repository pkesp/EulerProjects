// EulerProject_002.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?
*/

/*

*/

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vecPivo;
	int sum = 0;

	for ( int i = 1, j = 1; i <= 4000000; ) {
		vecPivo.push_back(i);
		int temp = i;
		i += j;
		j = temp;
	}

	for ( unsigned int i = 0; i < vecPivo.size(); i++ ) {
		if ( (vecPivo[i] & 1) == 0 ) {
			sum += vecPivo[i];
		}
	}

	cout << sum << endl;

    return 0;
}

