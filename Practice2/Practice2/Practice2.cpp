#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <iomanip>
#include <string>
#include <queue>
#include <numeric>
#include <functional>
#include <array>
#include <map>
#include <set>

using namespace std;

long long fibArray[51];

int calcFib(int num) 
{
	if (fibArray[num] == 0) 
	{
		fibArray[num] = calcFib(num - 1) + calcFib(num - 2);
	}
	return fibArray[num];
}

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < 51; ++i)
	{
		if (i <= 1)
		{
			fibArray[i] = 1;
		}
		else 
		{
			fibArray[i] = 0;
		}
	}

	long long fib = calcFib(N);
	cout << fib << endl;
}