// EulerProject_005.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
1 ~ 10 ������ � ���ε� ������ �������� ���� ���� ���� 2520�Դϴ�.

�׷��� 1 ~ 20 ������ � ���ε� ������ �������� ���� ���� ���� ���Դϱ�?
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

