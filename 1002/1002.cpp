/*
Title	: BOJ_1002 [�ͷ�]
Author	: Hoseok Lee
Date	: 2021/01/15

https://www.acmicpc.net/problem/1002
https://github.com/hoshogi
*/

/*
�� ���� ������ �������� ���� �־������� 
�� �� ������ ������ ���ϴ� �Ͱ� ����.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	int T, x1, y1, x2, y2, r1, r2;
	double dist;

	cin >> T;

	for (int i = 0;i < T;i++) 
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); // �� �� ������ �Ÿ�

		if (dist == 0) // �� ���� ���� ��
		{
			if (r1 == r2) // �������� ���� ��
				cout << -1 << endl;
			else // �������� �ٸ� ��
				cout << 0 << endl;
		}
		else
		{
			if (dist > r1 + r2) // �� �� ������ �Ÿ��� �� �������� �պ��� Ŭ ��
				cout << 0 << endl;
			else if (dist == r1 + r2) // �� �� ������ �Ÿ��� �� �������� �հ� ���� ��
				cout << 1 << endl;
			else if (dist > abs(r1 - r2) && dist < r1 + r2) // �� �� ������ �Ÿ��� �� �������� ������ ũ�� �� �������� �պ��� ���� ��
				cout << 2 << endl;
			else if (dist == abs(r1 - r2)) // �� �� ������ �Ÿ��� �� �������� ���� ���� ��
				cout << 1 << endl;
			else // �� �� ������ �Ÿ��� �� �������� ������ ���� ��
				cout << 0 << endl;
		}
	}
	
	return 0;
}