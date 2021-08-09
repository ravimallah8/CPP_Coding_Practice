#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector <int> arr(n + m);
	for (int i = 0; i < n + m; i++)
		cin >> arr[i];
	sort(arr.begin(), arr.end());
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	cout << arr.size();

	return	0;
}