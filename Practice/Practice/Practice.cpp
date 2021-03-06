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

int calcFib(int num) {
	if (num <= 1)return 1;
	return calcFib(num - 1) + calcFib(num - 2);
}

int main()
{
	int N;
	cin >> N;
	int fib = calcFib(N);
	cout << fib << endl;
}

