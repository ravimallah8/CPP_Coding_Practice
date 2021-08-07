#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int values[3] = {0};
	for (int i = 0; i < n; i++){
		if (arr[i] == 0)
			values[0]++;
		else if (arr[i] == 1)
			values[1]++;
		else
			values[2]++;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < values[0]; i++)
		arr[j++] = 0;
	for (i = 0; i < values[1]; i++)
		arr[j++] = 1;
	for (i = 0; i < values[2]; i++)
		arr[j++] = 2;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

}