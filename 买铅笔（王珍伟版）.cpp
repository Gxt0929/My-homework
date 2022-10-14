#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	double a, b, c, d, e, f;
	int sum1, sum2, sum3, cnt;
	cin >> a >> b;
	cin >> c >> d;
	cin >> e >> f;

	sum1 = ceil(n / a) * b;
	sum2 = ceil(n / c) * d;
	sum3 = ceil(n / e) * f;

	cnt = min(sum1, min(sum2, sum3));

	cout << cnt << endl;

	return 0;
}