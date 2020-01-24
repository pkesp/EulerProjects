// EulerProject_004.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

/*
�տ������� ���� ���� �ڿ������� ���� ���� ����� ���� ���� ��Ī��(palindrome)��� �θ��ϴ�.

�� �ڸ� ���� ���� ���� �� �ִ� ��Ī�� �� ���� ū ���� 9009 (= 91 �� 99) �Դϴ�.

�� �ڸ� ���� ���� ���� �� �ִ� ���� ū ��Ī���� ���Դϱ�?
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
		
		//result �� 0�̸� ��Ī�� ����
		if ( result == 0 ) 
			setInt.insert(i*j);

		j--;
		if ( j < 100 ) {
			j = 999;
			--i;
		}
	}

	set<int>::iterator iter;
	/*//Ȯ�ο�
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

	//������� ������ ��Ī��
	return 0;
}
