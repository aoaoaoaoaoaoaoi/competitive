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

int main()
{
	int N;
	cin >> N;

	fibArray[0] = 1;
	fibArray[1] = 1;
	for (int i = 2; i <= N; ++i)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}

	long long fib = fibArray[N];
	cout << fib << endl;
}