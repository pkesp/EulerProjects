// EulerProject_006.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
/*
1���� 10���� �ڿ����� ���� ������ ���ϸ� ������ �����ϴ� (������ ��).

12 + 22 + ... + 102 = 385
1���� 10�� ���� ���� ������ �� ����� �����ϸ� ������ �����ϴ� (���� ����).

(1 + 2 + ... + 10)2 = 552 = 3025
���� 1���� 10���� �ڿ����� ���� "���� ����"�� "������ ��" �� ���̴� 3025 - 385 = 2640 �� �˴ϴ�.

�׷��� 1���� 100���� �ڿ����� ���� "���� ����"�� "������ ��"�� ���̴� ���Դϱ�?
*/


#include "stdafx.h"
#include <iostream>

using namespace std;

int funcRecursive1(int number); // ���� ����
int funcRecursive2(int number); // ������ ��

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
