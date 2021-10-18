#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	// to solve this problem, we need to use as much plates/bowls as possible than the number of times that we need to wash either of these two
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) {
			// if it's equal to dish type 1, then we need to use the bowls, otherwise we need to wash some bowls
			if (m > 0) {
				m--;
			} else {
				ans++;
			}
		} else {
			// if it's equal to dish type 2, then we need to check if there are any available plates/bowls
			// since our goal is to be able to minimize the number of times that we need to wash
			if (k > 0) {
				k--;
			} else if (m > 0) {
				m--;
			} else {
				ans++;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
