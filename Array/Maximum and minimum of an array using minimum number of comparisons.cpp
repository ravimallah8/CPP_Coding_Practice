#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	} 
	int mi, mx;
	if (n == 1){
		mi = arr[0];
		mx = mi;
	}
	else{
		if (arr[0] < arr[1]){
			mi = arr[0];
			mx = arr[1];
		}
		else{
			mx = arr[0];
			mi = arr[1];
			for (int i = 2; i < n; i++){
				if (arr[i] > mx){
					mx = arr[i];
				}
				else if (arr[i] < mi){
					mi = arr[i];
				}

			}
		}
	}
	cout << mi << " " << mx;

	return 0;
}