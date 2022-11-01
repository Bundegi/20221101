#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
using namespace std;
int dp[100001] = { 0, };
//dp문제 그리디로 풀다가 나락감.
int main() {
	fast;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		dp[i] = i;
		for (int j = 1; j*j<= i; j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);

	}
	cout << dp[N] << endl;
}
