#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

// Time complexity of solution:  O(n) since two traversals are performed, regardless of n
// Space complexity of solution: O(1) since only new allocations after input are two int pointers and local sum variable, regardless of n

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