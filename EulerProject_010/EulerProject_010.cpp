// EulerProject_010.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
10 이하의 소수를 모두 더하면 2 + 3 + 5 + 7 = 17 이 됩니다.

이백만(2,000,000) 이하 소수의 합은 얼마입니까?
*/


#pragma once

#include "stdafx.h"

using namespace std;

#define SIZE 2000001

int main() {
	
	// default stack size up
	int primeNum[SIZE];
	for ( int i = 0; i < SIZE; i++ ) {
		primeNum[i] = i;
	}

	for ( int i = 2; i < SIZE; i++ ) {
		int num = 0;
		if ( primeNum[i] % i == 0 && primeNum[i] != 0 ) {
			for ( int j = 2; j < SIZE; j++ ) {
				num = i * j;
				if ( num > SIZE - 1 ) break;
				primeNum[num] = 0;
			}
		}
	}

	__int64 sum = 0;
	for ( int i = 0; i < SIZE; i++ ) {
		sum += primeNum[i];
	}

	printf("prime sum : %lld\n", sum - 1);

	return 0;
}