#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	bool flag = 1;
	int n = s.size();
	for (int i = 0; i < n / 2; i++){
		if (s[i] != s[n - 1 - i]){
			flag = 0;
			break;
		}
	}
	if (flag)
		cout << 1;
	else
		cout << 0;
	return 0;
}