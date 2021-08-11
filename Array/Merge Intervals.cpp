#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <vector<int>> intervals(n);
	for (int i = 0; i < n; i++){
		intervals[i] = vector<int> (2);
		cin >> intervals[i][0];
		cin >> intervals[i][1];
	}
	sort(intervals.begin(), intervals.end());
	vector <vector<int>> merge;
	int count = 0;	
	for (int i = 0; i < n; i++){
		vector <int> current;
		current[0] = intervals[i][0];
		current[1] = intervals[i][1];
		for (int j = i+1; j < n; i++){
			if (current[0] < intervals[j][0])
				break;
			else{
				current[1] = intervals[j][1];
			}
		}
		merge[count] = vector<int> (2);
		merge[count][0] = current[0];
		merge[count][1] = current[1];
		count++;
	}
	cout << "[";
	for (int i = 0; i < merge.size(); i++){
		cout << "[ " << merge[i][0] << ", ";
		cout << merge[i][1] << "] ";
	}
	cout << "]";
	return 0;
}