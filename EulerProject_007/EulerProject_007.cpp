// EulerProject_007.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
�Ҽ��� ũ�� ������ �����ϸ� 2, 3, 5, 7, 11, 13, ... �� ���� �˴ϴ�.

�� �� 10,001��°�� �Ҽ��� ���ϼ���.
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
				//cout << num << endl; // Ȯ�ο�
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

