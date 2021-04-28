#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		int cnt = 0;
		// iterate from 'l' to 'r' (inclusive)
		for (int i = l; i <= r; i++) {
			// check if the last digit of the number within the range is '2', '3', or '9'
			if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9) {
				// if yes, then increment 'cnt'
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
