// EulerProject.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <set>
#include <iostream>

using namespace std;

int main()
{
	std::set<int> set35; 

	for ( int i = 3; i < 1000; i += 3 ) {
		set35.insert(i);
	}

	for ( int i = 5; i < 1000; i += 5 ) {
		set35.insert(i);
	}

	int size = set35.size();
	int sum = 0;
	for ( set<int>::iterator iter = set35.begin(); iter != set35.end(); ++iter ) {
		//cout << *iter << ", ";
		sum += *iter;
	}

	cout << sum << endl;

    return 0;
}

