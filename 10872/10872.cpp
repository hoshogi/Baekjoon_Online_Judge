/*
Title	: BOJ_10872 [���丮��]
Author	: Hoseok Lee
Date	: 2021/01/16

https://www.acmicpc.net/problem/10872
https://github.com/
*/

/*
���丮�� 0 �� 1 �̴� (0! = 1)
*/
#include <iostream>
using namespace std;

int Factorial(int n)
{
	if (n > 1)
		return n * Factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int n;

	cin >> n;
	cout << Factorial(n) << endl;

	return 0;
}