#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
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