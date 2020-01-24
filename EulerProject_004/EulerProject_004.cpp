// EulerProject_004.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.

두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.

세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?
*/


#include "stdafx.h"
#include <iostream>
#include <set>

using namespace std;

int palindrome(int num);

int main()
{
	int i = 999, j = 999;
	int result = 0;

	set<int> setInt;

	cout << "Euler Project 004" << endl;

	while( i > 100 ) {
		result = palindrome( i * j );
		
		//result 가 0이면 대칭수 저장
		if ( result == 0 ) 
			setInt.insert(i*j);

		j--;
		if ( j < 100 ) {
			j = 999;
			--i;
		}
	}

	set<int>::iterator iter;
	/*//확인용
	for ( iter = setInt.begin(); iter != setInt.end(); iter++ ) {
		cout << *iter << endl;
	}
	*/
	iter = setInt.end();
	iter--;
	cout << *iter << endl; //906609

    return 0;
}

int palindrome(int num)
{
	static char myStr[7];
	
	_itoa_s(num, myStr, sizeof(myStr), 10);
	int len = strlen(myStr);
	//cout << len << endl;

	for ( int i = 0; i < len / 2; i++ ) {
		if ( myStr[i] == myStr[len - i - 1] ) continue;
		else return 1;
	}

	//여기까지 왔으면 대칭수
	return 0;
}
