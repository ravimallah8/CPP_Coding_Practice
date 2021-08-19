#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int  n = s.size();
	for (int i = 0; i < n / 2; i++){
		char temp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = temp;
	}
	cout << s;
	return 0;
}