// EulerProject_010.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
10 ������ �Ҽ��� ��� ���ϸ� 2 + 3 + 5 + 7 = 17 �� �˴ϴ�.

�̹鸸(2,000,000) ���� �Ҽ��� ���� ���Դϱ�?
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