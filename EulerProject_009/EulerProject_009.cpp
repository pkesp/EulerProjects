// EulerProject_009.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/*
세 자연수 a, b, c 가 피타고라스 정리 a2 + b2 = c2 를 만족하면 피타고라스 수라고 부릅니다 (여기서 a < b < c ).
예를 들면 3^2 + 4^2 = 9 + 16 = 25 = 5^2이므로 3, 4, 5는 피타고라스 수입니다.

a + b + c = 1000 인 피타고라스 수 a, b, c는 한 가지 뿐입니다. 이 때, a × b × c 는 얼마입니까?
*/

#include "stdafx.h"
#include <cmath>

#define EPSILON 0.00001

int main()
{
	int a, b, c = 0;
	//처음 푼 코드
	for ( a = 1; a < 1000; a++ ) {
		for ( b = a + 1; b < 1000; b++ ) {
			float num = sqrtf(a * a + b * b);
			c = num / 1;
			if ( num - EPSILON < c && c < num + EPSILON && c > b ) {
				if ( a + b + c == 1000 ) {
					printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
				}
			}
		}
	}

	//다른 사람 것 보고 수정한 것
	//위의 것은 루트 연산 때문에 연산량이 많은 듯...
	//1000 - a - b 라는 걸 다들 자연스럽게 사용하시네... 내가 멍청한 듯 ㅋ
	for ( a = 1; a < 1000; a++ ) {
		for ( b = a + 1; b < 1000; b++ ) {
			c = 1000 - a - b;
			if ( a * a + b * b == c * c && a + b + c == 1000 ) {
				printf("%d * %d * %d = %d\n", a, b, c, a * b * c);
			}
		}
	}

    return 0;
}

