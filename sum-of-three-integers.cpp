#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

// Time complexity of solution:  O(n^2) since two nested loops used, which dominates O(nlog(n)) std sort algorithm
// Space complexity of solution: O(nlog(n)) from std sort algorithm, which dominates constant term

bool IsSumOfThree(std::vector<int> nums, int target)
{
	std::sort(nums.begin(), nums.end()); // For average time efficiency, despite that std::sort() adds O(nlogn) time complexity

	for (int i = 0; i < nums.size() - 2; i++)
	{
		int left = i + 1;
		int right = nums.size() - 1;

		// For valid sum, indices of the three array values must be distinct
		
		while (left < right)
		{
			int sum = nums[i] + nums[left] + nums[right];

			if (sum == target)
				return true;
			
			else if (sum < target)
				left++;

			else
				right--;
		}
	}

	return false;
}

int main()
{
	std::vector<int> arr1 = { 0, 1, 2 };
	std::vector<int> arr2 = { 2, 1, 0 };
	std::vector<int> arr3 = { 1, 2, 3, 4, 5, 6 };
	std::cout << IsSumOfThree(arr1, 2) << std::endl;
	std::cout << IsSumOfThree(arr2, 3) << std::endl;
	std::cout << IsSumOfThree(arr3, 10) << std::endl;
}
