#include <bits/stdc++.h>

using namespace std;

const int MAX = 100001;
int good[MAX];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		// calculate good numbers using the concept of prefix-sum
		for (int i = 1; i < MAX; i++) {
			int rem = i % 10;
			if (rem == 2 || rem == 3 || rem == 9) {
				good[i] = good[i - 1] + 1;
			} else {
				good[i] = good[i - 1];
			}
		}
		cout << good[r] - good[l - 1] << '\n';
	}
	return 0;
}
