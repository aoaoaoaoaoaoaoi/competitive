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
#define INF 1000000007 

int N;
int ans = INF;
int h[100000];

int getFib(int num) {
	if (num <= 1)return 1;
	return getFib(num - 1) + getFib(num - 2);
}

int main()
{
	getFib(10);
	cout << ans << endl;
}

