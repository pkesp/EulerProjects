// EulerProject_012.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
1부터 n까지의 자연수를 차례로 더하여 구해진 값을 삼각수라고 합니다.
예를 들어 7번째 삼각수는 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28이 됩니다.
이런 식으로 삼각수를 구해 나가면 다음과 같습니다.

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
이 삼각수들의 약수를 구해봅시다.

1: 1
3: 1, 3
6: 1, 2, 3, 6
10: 1, 2, 5, 10
15: 1, 3, 5, 15
21: 1, 3, 7, 21
28: 1, 2, 4, 7, 14, 28
위에서 보듯이, 5개 이상의 약수를 갖는 첫번째 삼각수는 28입니다.

그러면 500개 이상의 약수를 갖는 가장 작은 삼각수는 얼마입니까?
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
	printf("삼각수 : %d\n", sum);
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