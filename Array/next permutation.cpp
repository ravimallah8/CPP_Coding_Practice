#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> nums(n);
	for (int i = 0; i < n; i++){
		cin >> nums[i];
	}

	int k, l;
	// k = n - 2; starting from 2nd last element
	for (k = n - 2; k >= 0; k--){
		// store k for nums[k] > nums[k + 1]
		if (nums[k] < nums[k + 1]){
			break;
		}
	}
	// no match found or if given permutation if last permutation
	if (k < 0){
		reverse(nums.begin(), nums.end());
	}
	else{
		for (l = n - 1; l > k; l--){
			if (nums[l] > nums[k])
				break;
		}
		swap(nums[k], nums[l]);
		reverse(nums.begin() + k + 1, nums.end());
	}
	for (int i = 0; i < n; i++)
		cout << nums[i] << " ";
	return 0;
}