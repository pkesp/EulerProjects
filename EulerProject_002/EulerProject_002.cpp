// EulerProject_002.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
�Ǻ���ġ ������ �� ���� �ٷ� ���� �� �� ���� ���� ���� �˴ϴ�. 1�� 2�� �����ϴ� ��� �� ������ �Ʒ��� �����ϴ�.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
¦���̸鼭 4�鸸 ������ ��� ���� ���ϸ� �󸶰� �˴ϱ�?
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

