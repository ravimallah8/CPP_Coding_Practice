#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int k = 2;
	int temp = arr[k - 1];
	for (int i = n - 1; i >= 0; i--){
		arr[(i+k) % n] = arr[i];
	}
	arr[k] = temp;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}