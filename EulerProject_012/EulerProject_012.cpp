// EulerProject_012.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
1���� n������ �ڿ����� ���ʷ� ���Ͽ� ������ ���� �ﰢ����� �մϴ�.
���� ��� 7��° �ﰢ���� 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28�� �˴ϴ�.
�̷� ������ �ﰢ���� ���� ������ ������ �����ϴ�.

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
�� �ﰢ������ ����� ���غ��ô�.

1: 1
3: 1, 3
6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28
������ ������, 5�� �̻��� ����� ���� ù��° �ﰢ���� 28�Դϴ�.

�׷��� 500�� �̻��� ����� ���� ���� ���� �ﰢ���� ���Դϱ�?
*/

#include "stdafx.h"
#include <time.h>

int main()
{
	clock_t start, end;

	start = clock();
	int count = 0;
	int n = 1;
	int sum;

	while ( count < 500 ) 
	{
		count = sum = 0;

		for ( int i = 1; i <= n; i++ ) {
			sum += i;
		}

		int pibot = sum;
		for ( int i = 1; i < pibot; i++ ) {
			if ( sum % i == 0 ) {
				pibot = sum / i;
				count += 2;
				if ( pibot == i ) count--;
			}
		}

		n++;
	}
	end = clock();
	printf("�ﰢ�� : %d\n", sum);
	printf("%dms", end - start);

	return 0;
}

//
//#include "stdafx.h"
//#include <iostream>
//#include <chrono>
//using namespace std;
//
//int div_count(int a)
//{
//	int count = 2;
//
//	int k = sqrt(a);
//
//	for ( int i = 2; i <= k; ++i )
//	{
//		if ( a % i == 0 )
//		{
//			count += 2;
//			if ( i == k )
//				count--;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	auto t = chrono::system_clock::now();
//
//	int trinum = 0;
//
//	for ( int i = 1; ; ++i )
//	{
//		trinum += i;
//		if ( div_count(trinum) >= 500 )
//		{
//			cout << trinum << endl;
//			break;
//		}
//	}
//
//
//	chrono::duration<double> sec = chrono::system_clock::now() - t;
//
//	cout << sec.count() << endl;
//}