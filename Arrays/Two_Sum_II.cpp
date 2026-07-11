/*
Problem: Two Sum II - Input Array Is Sorted
Platform: LeetCode (167)
Difficulty: Medium

Approach:
- Use two pointers.
- Since the array is sorted, move the left pointer to increase the sum
  and the right pointer to decrease the sum.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum > target) {
                right--;
            }
            else {
                left++;
            }
        }

        return {};
    }
};
