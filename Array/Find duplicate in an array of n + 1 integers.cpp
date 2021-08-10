#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i <= n; i++)
		cin >> arr[i];
	if (n == 0){
		cout << "-1";
	}
	else{
		int slow = arr[0];
		int fast = arr[0];
		do{
			slow = arr[slow];
			fast = arr[arr[fast]];
		}while (slow != fast);

		fast = arr[0];
		while (fast != slow){
			fast = arr[fast];
			slow = arr[slow];
		}
		cout << fast;
	}
	return 0;
}
/*
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i <= n; i++)
		cin >> arr[i];
	for (int i = 0; i <=	 n; i++){
		if (arr[abs(arr[i])] < 0){
			cout << abs(arr[i]);
			break;
		}

		arr[abs(arr[i])] = -1 * arr[abs(arr[i])];
	}
	return 0;
}
*/