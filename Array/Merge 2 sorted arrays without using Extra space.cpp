#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector <int> arr1(n), arr2(m);
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];
	int i = 0;
	while (i < n){
		// if last element of arr1 is less then arr2 first element then break
		if (arr1[n - 1] <= arr2[0])
			break;
		if (arr1[i] > arr2[0]){
			swap(arr1[i], arr2[0]);
		}
		i++;
		sort(arr2.begin(), arr2.end());
	}
	for (int i = 0; i < n; i++)
		cout << arr1[i] << " ";
	for (int i = 0; i < m; i++)
		cout << arr2[i] << " ";
	return 0;
}