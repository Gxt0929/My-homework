#include <bits/stdc++.h>
using namespace std;

//全局变量 初始化为0
int n, m, j, i, k, fen[10];

int main () {
	
	double max = 0, f = 0;
	cin >> n >> m;

	for ( i = 1; i <= n; i++) {
		for ( j = 0; j < m; j++) {
			cin >> fen[j];
		}

		sort(fen, fen  + m);

		double sum = 0;



		for (k = 1; k <= m - 2; k++) {
			sum += fen[k];
		}

		f = sum / (m - 2);

		if (f > max) {
			max = f;

			f = 0;
		}
	}

//	for (int i = 0; i < m; i++) {
//		cout << fen[i] << " ";


	cout << fixed << setprecision(2) << max << endl;
	return 0;
}