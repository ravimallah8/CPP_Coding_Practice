#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int ans = 0;
	int dp[*max_element(arr, arr + n)] = {0};
	for (int i = 0; i < n; i++){	
		if (arr[i] >= k)
			continue;
		ans += dp[abs(k - arr[i])];
		dp[arr[i]] += 1;
	}
	cout << ans;
	return 0;
}

/*
int main()
{	
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n && j != i; j++)
			if (arr[i] + arr[j] == k)
				ans++;
	}
	cout << ans;
	return 0;
}
*/