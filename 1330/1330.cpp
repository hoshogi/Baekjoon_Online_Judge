/*
Title	: BOJ_1330 [�� �� ���ϱ�]
Author	: Hoseok Lee
Date	: 2021/01/13

https://www.acmicpc.net/problem/1330
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
	int a, b;

	cin >> a >> b;
	if (a < b)
		cout << "<" << endl;
	else if (a > b)
		cout << ">" << endl;
	else
		cout << "==" << endl;

	return 0;
}