#include <iostream>
#define no_of_chars 256
using namespace std;
int main()
{
	string s;
	getline(cin, s);;
	// ASCII characters 256 
	int dp[no_of_chars] = {0};
	for (int i = 0; i < s.size(); i++){
		dp[(int)s[i]]++;
	}
	for (int i = 0; i < no_of_chars; i++){
		if (dp[i] > 1){
			printf("%c, count = %d\n", char(i), dp[i]);
		}
	}
	return 0;
}