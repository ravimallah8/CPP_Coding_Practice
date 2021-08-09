// Kadane's Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n;i++)
		cin >> arr[i];
	int max_sum = INT_MIN;
	int cur_sum = 0;
	for (int i = 0; i < n; i++){
		cur_sum += arr[i];
		if (cur_sum > max_sum)
			max_sum = cur_sum;
		if (cur_sum < 0)
			cur_sum = 0;
	}
	cout << max_sum;
	return 0;
}

/*
Time Complixity : O(n*n)
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max_sum = INT_MIN;
	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = i; j < n; j++){
			sum += arr[j];
			max_sum = max(max_sum, sum);
		}
	}
	cout << max_sum ;
	return 0;
}
*/