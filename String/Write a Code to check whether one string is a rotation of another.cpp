#include <iostream>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;
	int i = 0;
	bool flag = 1;
	for (int j = 0; j < s1.size() && i < s2.size(); j++){
		if (i > 0 && s1[j] != s2[i]){
			flag = 0;
			break;
		}
		if (s1[j] == s2[i]){
			i++;
		}
	}
	if (flag)
		cout << "true";
	else
		cout << "false";
	return 0;
}