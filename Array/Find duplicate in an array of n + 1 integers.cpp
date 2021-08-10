#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i <= n; i++)
		cin >> arr[i];
	for (int i = 0; i <= n; i++){
		if (arr[abs(arr[i])] < 0){
			cout << abs(arr[i]);
			break;
		}

		arr[abs(arr[i])] = -1 * arr[abs(arr[i])];
	}
	return 0;
}