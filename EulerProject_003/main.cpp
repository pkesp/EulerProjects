/*
� ���� �Ҽ��� �����θ� ��Ÿ���� ���� ���μ����ض� �ϰ�, �� �Ҽ����� �� ���� ���μ���� �մϴ�.
���� ��� 13195�� ���μ��� 5, 7, 13, 29 �Դϴ�.

600851475143�� ���μ� �߿��� ���� ū ���� ���ϼ���.

*/


// �������� �̹� ���μ� ������ ������ ����ؼ�
// ������ �� �ִ� ���� ���μ� ������ ���� Ȯ���ϴ�
// �ٷιٷ� ������ �������� 0�� ������ �༮�� ã�ҽ��ϴ�.
#include <iostream>

using namespace std;

int main() 
{
	int64_t value = 600851475143;

	for ( int64_t i = 2; i <= value; i++) {
		if ( value % i == 0 ) {
			cout << i << ", ";
			value /= i;
		}
	}

	return 0;
}