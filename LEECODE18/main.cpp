#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	vector<vector<int>> res;
	int size = nums.size();
	for (int i = 0; i < size - 3; i++) {
		if (i > 0 && nums[i] == nums[i - 1]) {
			continue;
		}
		for (int j = i + 1; j < size - 2; j++) {
			if (j > i + 1 && nums[j] == nums[j - 1]) {
				continue;
			}
			int left = j + 1;
			int right = size - 1;
			while (left < right) {
				//int sum = nums[i] + nums[j] + nums[left] + nums[right];
				long long sum = nums[i];
				sum += nums[j];
				sum += nums[left];
				sum += nums[right];
				if (sum == target) {
					res.push_back({ nums[i],nums[j],nums[left],nums[right] });
					while (left < right && nums[left] == nums[left + 1]) {
						left++;
					}
					while (left < right && nums[right] == nums[right - 1]) {
						right--;
					}
					left++;
					right--;
				}
				else if (sum < target) {
					left++;
				}
				else {
					right--;
				}
			}
		}
	}	
	//resÈ¥ÖØ
	sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());
	return res;

}
int main() {
	vector<int> nums;
	vector<vector<int>> value;
	nums = { 2,2,2,2,2,2,2 };
	int target = 8;
	value = fourSum(nums, target);
	for (int i = 0; i < value.size(); i++) {
		for (int j = 0; j < value[i].size(); j++) {
			cout << value[i][j] << " ";
		}
		cout << endl;
	}

} 