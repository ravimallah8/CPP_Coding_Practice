#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int k, n;
	cin >> k >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	v[0] = v[0]+k;
	if (v[n -1] - k < 0){
		v[n -1] += k;
	}
	else{
		v[n - 1] -= k;
	}
	cout << abs(v[n-1] - v[0]);
	return 0;
}