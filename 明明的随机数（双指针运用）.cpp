#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int arr[1001];
	int fast = 1, slow = 1;

	cin >> n;
	//输入数组
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//排序
	sort(arr, arr  + n );

	int j = 0;
	int cnt = 0;
	//双指针遍历
	for (int i = 1; i <= n; i++) {
		if (arr[j] != arr[i]) {
			arr[++j] = arr[i];
			cnt++;
		}
	}
	//双指针遍历次数 即除去重复后的数组个数
	cout << cnt << endl;
	//循环输出
	for (int i = 0; i < n-(n-cnt); i++) {
		cout << arr[i] << " ";

	}

	return 0;
}