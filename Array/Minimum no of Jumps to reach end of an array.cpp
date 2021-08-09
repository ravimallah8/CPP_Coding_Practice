#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (n == 0){
		cout << "-1";
	}
	else{
		int jump = 1;
		int i = 0;
		while (i < n){
			bool flag = 0;
			int stop = arr[i];
			int maxi = INT_MIN;
			int start = i;
			for (int j = i + 1; j < i + stop; j++){
				if (arr[j] >= n - j + 1){
					flag = 1;
					break;
				}

				if (arr[j] >= maxi){
					maxi = arr[j];
					start = j;
				}
			}
			if (flag)
				break;
			i = start;
			i++;
			jump++;
		}
		cout << jump;
	}
	return 0;
}