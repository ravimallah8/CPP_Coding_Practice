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
		current.push_back(intervals[i][0]);
		current.push_back(intervals[i][1]);
		for (int j = i+1; j < n; j++){
			if (current[1] < intervals[j][0])
				break;
			else{
				current[1] = intervals[j][1];
				i++;
			}
		}
		merge.push_back(current);
		count++;
	}
	cout << "[";
	for (int i = 0; i < merge.size(); i++){
		cout << "[ " << merge[i][0] << ", ";
		cout << merge[i][1] << "], ";
	}
	cout << "]";
	return 0;
}