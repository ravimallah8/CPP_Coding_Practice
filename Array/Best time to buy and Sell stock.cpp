#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int maxProfit = 0;
	int minPrice = arr[0];
	for (int i = 1 ; i < n; i++){
		maxProfit = max(maxProfit, arr[i] - minPrice);
		minPrice = min(minPrice, arr[i]);
	}
	cout << maxProfit;
	return 0;
}